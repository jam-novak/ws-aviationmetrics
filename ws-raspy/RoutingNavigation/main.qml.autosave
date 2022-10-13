/****************************************************************************
**
** Copyright (C) 2019-2022 Klarälvdalens Datakonsult AB, a KDAB Group company, info@kdab.com
** Copyright (C) 2019-2022 General Magic B.V., info@generalmagic.com
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
//! [RoutingNavigation plumbing]
import QtQuick.Window 2.12
import GeneralMagic 2.0

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Routing and Navigation Example")

    Component.onCompleted: {
        //! [Set token safely]
        ServicesManager.settings.token = __my_secret_token;
        //! [Set token safely]
        ServicesManager.settings.allowInternetConnection = true; // enable connection to online services

        var updater = ServicesManager.contentUpdater(ContentItem.Type.RoadMap);
        updater.autoApplyWhenReady = true;
        updater.update();
    }
    //! [RoutingNavigation plumbing]

    //! [RoutingNavigation routing]
    RoutingService {
        id: routingService
        type: Route.Type.Fastest
        transportMode: Route.TransportMode.Car

        waypoints: LandmarkList {
            Landmark {
                name: "start"
                coordinates: Coordinates {
                    latitude: 48.849289
                    longitude: 2.346027
                }
            }
            Landmark {
                name: "stop"
                coordinates: Coordinates {
                    latitude: 48.874630
                    longitude: 2.331512
                }
            }
        }
        onFinished: {
            mapView.routeCollection.set(routeList);
            mapView.centerOnRouteList(routeList);
        }
    }
    //! [RoutingNavigation routing]

    //! [RoutingNavigation navigation]
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
                mapView.routeCollection.clear(true /*keepMainRoute*/);
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
            mapView.routeCollection.add(route, true);
            mapView.routeCollection.clear(true);
        }
    }
    //! [RoutingNavigation navigation]

    //! [RoutingNavigation mapView]
    MapView {
        id: mapView
        anchors.fill: parent
        viewAngle: 25
        cursorVisibility: false

        onRouteSelected: {
            routeCollection.mainRoute = route;
            centerOnRoute(route);
        }
    //! [RoutingNavigation mapView]

        Rectangle {
            color: Qt.rgba(1, 1, 1, 0.75)
            visible: navigation.active
            anchors.top: parent.top
            anchors.left: parent.left
            anchors.right: parent.right
            height: 64
            RowLayout {
                anchors.fill: parent
                anchors.margins: 10
                DynamicIconView {
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
                    Layout.fillWidth: true
                    font.pixelSize: 16

                    text: navigation.currentInstruction.nextStreetName + " (" + distance(navigation.currentInstruction.distanceToNextTurn) + ")";
                }
                DynamicIconView {
                    Layout.fillHeight: true
                    Layout.maximumWidth: height
                    width: height
                    arrowInner: "darkgrey"
                    arrowOuter: "black"
                    slotInner: "grey"
                    slotOuter: "darkgreen"

                    iconSource: navigation.currentInstruction.nextNextTurnDynamicIcon
                }
                Label {
                    font.pixelSize: 14
                    text: distance(navigation.currentInstruction.distanceToNextNextTurn)
                }
            }
        }

        RowLayout {
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.bottom: parent.bottom
            //! [RoutingNavigation compute routing]
            Button {
                text: "Compute route(s)"
                enabled: ServicesManager.settings.connected && !navigation.active
                onClicked: routingService.update()
            }
            //! [RoutingNavigation compute routing]
            Item {
                Layout.fillWidth: true
            }
            Button {
                enabled: mapView.routeCollection.mainRoute.valid
                text: navigation.active ? "Stop simulation" : "Start simulation"
                onClicked: navigation.active = !navigation.active
            }
        }
    //! [RoutingNavigation mapView end]
    }
    //! [RoutingNavigation mapView end]
}
