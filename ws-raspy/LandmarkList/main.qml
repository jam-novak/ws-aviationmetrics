/****************************************************************************
**
** Copyright (C) 2020-2021 Klarälvdalens Datakonsult AB, a KDAB Group company, info@kdab.com
** Copyright (C) 2020-2021 General Magic B.V., info@generalmagic.com
**
** BSD License Usage
**
** Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are
** met:
**   * Redistributions of source code must retain the above copyright
**     notice, this list of conditions and the following disclaimer.
**   * Redistributions in binary form must reproduce the above copyright
**     notice, this list of conditions and the following disclaimer in
**     the documentation and/or other materials provided with the
**     distribution.
**   * Neither the name of Klarälvdalens Datakonsult AB nor the names of
**     its contributors may be used to endorse or promote products derived
**     from this software without specific prior written permission.
**
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
****************************************************************************/

import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12

// This code between the start and end markers is copied into the doc.

// setup codesnippet starts here
//! [LandmarkList plumbing]

import QtQuick.Window 2.12
import GeneralMagic 2.0

Window {

    visible: true
    width: 640
    height: 480
    title: qsTr("Interactive LandmarkList Routing and Navigation Example")

    Component.onCompleted: {

        //! [Set token safely]
        ServicesManager.settings.token = __my_secret_token;
        //! [Set token safely]

        ServicesManager.settings.allowInternetConnection = true; // enable connection to online services

        var updater = ServicesManager.contentUpdater(ContentItem.Type.RoadMap);
        updater.autoApplyWhenReady = true;
        updater.update();
    }

    //! [LandmarkList plumbing]
    // setup codesnippet ends here

    // reverse geocoding codesnippet starts here
    //! [LandmarkList ReverseGeocoding]

    SearchService {

        // Reverse geocoding takes as input a location on the map (lon,lat coordinates),
        // in this case, interactively selected by the user, and gives as output a list
        // of points of interest located near the selected position, 3 items in this example.

        id: reverseGeocoding
        searchMapPOIs: true
        searchAddresses: true
        limit: 10
        thresholdDistance: 500

        // The list of 3 points of interest located near the selected position
        // is shown here in a popup, giving the user the option to select one of them
        // to be added as a waypoint for a route, or simply click outside the popup to close it.

        onSearchCompleted: addWaypointPopup.open()
    }

    Popup {

        // This shows the results of the reverse geocoding in a popup.

        id: addWaypointPopup
        modal: true
        focus: true
        closePolicy: Popup.CloseOnEscape | Popup.CloseOnPressOutside
        width: 300
        height: 200

        ListView {

            id: searchList
            anchors.fill: parent
            anchors.margins: 1
            clip: true
            model: reverseGeocoding

            delegate: Item {

                height: row.height

                RowLayout {

                    id: row

                    IconView {
                        iconSource: landmark.icon
                        Layout.maximumHeight: row.height
                        Layout.maximumWidth: row.height
                        width: height
                        height: row.height
                    }
                    ColumnLayout {

                        Layout.fillHeight: true
                        Layout.fillWidth: true

                        Text {
                            Layout.fillWidth: true
                            text: landmark.name + " (" + distance(landmark.coordinates.distance(reverseGeocoding.coordinates)) + ")"
                            wrapMode: Text.WrapAnywhere
                        }
                        Text {
                            Layout.fillWidth: true
                            text: landmark.description
                            font.italic: true
                            wrapMode: Text.WrapAnywhere
                        }
                    }
                    TapHandler {
                        target: row
                        onTapped: {

                            // This adds a waypoint to the route by selecting
                            // an item from the popup list of reverse geocoding results.

                            routingWaypoints.append(landmark)
                            addWaypointPopup.close()
                        }
                    }
                }
            }
        }
    }

    //! [LandmarkList ReverseGeocoding]
    // reverse geocoding codesnippet ends here

    // routing setup codesnippet begins here
    //! [LandmarkList routing]

    LandmarkList {

        // This is the waypoint list for the route,
        // including the departure and destination.

        id: routingWaypoints
    }

    Component {

        // This is used for creating a waypoint to be added
        // to the route from a location tapped on the map.

        id: landmarkComponent
        Landmark {}
    }

    RoutingService {
        id: routingService
        type: Route.Type.Fastest
        transportMode: Route.TransportMode.Car

        // The list of waypoints is made available to the routing service.

        waypoints: routingWaypoints
        onFinished: {
            mapView.routeCollection.set(routeList);
            mapView.centerOnRouteList(routeList);
        }
    }

    //! [LandmarkList routing]
    // routing setup codesnippet ends here

    // navigation codesnippet begins here
    //! [LandmarkList navigation]

    function distance(meters)
    {
        return meters >= 1000 ? (meters / 1000.).toFixed(3) + " Km" :  meters.toFixed(0) + " m";
    }

    NavigationService {
        id: navigation
        route: mapView.routeCollection.mainRoute
        simulation: true // change it to false (default) to perform real turn by turn navigation
        onActiveChanged: {
            if (active) {
                mapView.startFollowingPosition();
                mapView.routeCollection.clear();
                mapView.routeCollection.add(mapView.routeCollection.mainRoute);
            }
        }
        onWaypointReached: console.log("WaypointReached :" + waypoint.name);
        onDestinationReached: mapView.routeCollection.clear();
        onNavigationError: {
            console.log("NavigationError :" + error);
            mapView.routeCollection.clear();
        }
        onNavigationRouteUpdated: {
            console.log("RouteUpdated :" + route.summary);
            mapView.routeCollection.clear();
            mapView.routeCollection.add(route);
        }
    }

    //! [LandmarkList navigation]
    // navigation codesnippet ends here

    // map view codesnippet starts here
    //! [LandmarkList mapView]

    MapView {
        id: mapView
        anchors.fill: parent
        viewAngle: 25
        cursorVisibility: false

        onRouteSelected: {
            routeCollection.mainRoute = route;
            centerOnRoute(route);
        }

    //! [LandmarkList mapView]
    // map view codesnippet ends here

    // interactive map waypoint codesnippet starts here
    //! [LandmarkList waypoints]

        Label {
            id: infoLabel
            anchors.top: parent.top
            anchors.horizontalCenter: parent.horizontalCenter
            text: "Long press to add a waypoint"
        }
        CheckBox {
            id: useReverseGeocoding
            anchors.top: infoLabel.bottom
            anchors.horizontalCenter: parent.horizontalCenter

            checked: true
            text: "Show reverse geocoding list"
        }

        TapHandler {
            grabPermissions: PointerHandler.CanTakeOverFromAnything
            onLongPressed: {
                if (!useReverseGeocoding.checked) {

                    // This adds a waypoint to the route by long-tapping
                    // (tapping and holding for about a second)
                    // a given location directly on the map.
                    // First, create a landmark that can hold a route waypoint.

                    var lmk = landmarkComponent.createObject(routingWaypoints);

                    // Next, add the map coordinates from the tap location to the waypoint.

                    lmk.coordinates = mapView.wgsForScreen(point.pressPosition);

                    // Finally, add the waypoint to the list from which the route is generated.

                    routingWaypoints.append(lmk);

                    console.log("Waypoint added");
                    return;
                }

                if (point.pressPosition.x + addWaypointPopup.width > mapView.width)
                    addWaypointPopup.x = point.pressPosition.x - addWaypointPopup.width;
                else
                    addWaypointPopup.x = point.pressPosition.x

                if (point.pressPosition.y + addWaypointPopup.height > mapView.height)
                    addWaypointPopup.y = point.pressPosition.y - addWaypointPopup.height;
                else
                    addWaypointPopup.y = point.pressPosition.y

                reverseGeocoding.coordinates = mapView.wgsForScreen(point.pressPosition);
                reverseGeocoding.search();
            }
        }

    //! [LandmarkList waypoints]
    // interactive map waypoint codesnippet ends here

        Rectangle {
            color: Qt.rgba(1, 1, 1, 0.75)
            visible: navigation.active
            anchors.top: parent.top
            anchors.left: parent.left
            anchors.right: parent.right
            height: 64
            RowLayout {
                anchors.fill: parent
                DynamicIconView {
                    id: nextTurnIcon
                    Layout.fillHeight: true
                    Layout.maximumWidth: height
                    width: height
                    arrowInner: "darkblue"
                    arrowOuter: "gold"
                    slotInner: "grey"
                    slotOuter: arrowOuter

                    iconSource: navigation.currentInstruction.nextTurnDynamicIcon
                }
                Label {
                    id: nextTurnInfo
                    Layout.fillWidth: true
                    font.pixelSize: 16

                    text: navigation.currentInstruction.nextStreetName + " (" + distance(navigation.currentInstruction.distanceToNextTurn) + ")";
                }
            }
        }

        // The control buttons at the bottom.

        RowLayout {

            anchors.left: parent.left
            anchors.right: parent.right
            anchors.bottom: parent.bottom
            spacing: 20

            // compute routing codesnippet begins here
            //! [LandmarkList compute routing]

            Button {
                text: "Compute route(s)"
                enabled: ServicesManager.settings.connected && !navigation.active && routingWaypoints.length > 1
                onClicked: routingService.update()
            }
            Button {
                enabled: mapView.routeCollection.mainRoute.valid
                text: navigation.active ? "Stop simulation" : "Start simulation"
                onClicked: navigation.active = !navigation.active
            }

            //! [LandmarkList compute routing]
            // compute routing codesnippet ends here

            Item {
                Layout.fillWidth: true
            }
            Button {
                enabled: routingWaypoints.length
                text: "Clear waypoints"
                onClicked: {
                    navigation.stop();
                    routingWaypoints.clear();
                }
            }
        }

    // map view codesnippet closing parenthesis starts here
    //! [LandmarkList mapView end]
    }
    //! [LandmarkList mapView end]
    // map view codesnippet closing parenthesis ends here

// setup codesnippet closing parenthesis starts here
//! [LandmarkList plumbing end]
}
//! [LandmarkList plumbing end]
// setup codesnippet closing parenthesis ends here
