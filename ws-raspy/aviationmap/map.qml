import QtQuick 2.15
import QtQuick.Window 2.14
import QtLocation 5.6
import QtPositioning 5.6
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12
//import GeneralMagic 2.0
import Qt.labs.location 1.0


    Window{
        width: 640
        height: 480
        visible: true

        //open street map source
        Plugin {
            id: mapPlugin
            name: "osm" // "mapboxgl", "esri", ...
            PluginParameter {
                        name: "osm.mapping.providersrepository.disabled"
                        value: "true"
                    }

             PluginParameter {
                        name: "osm.mapping.providersrepository.address"
                        value: "http://maps-redirect.qt.io/osm/5.6/"
                    }
             PluginParameter { name: "osm.useragent"; value: "My great Qt OSM application" }
                PluginParameter { name: "osm.mapping.host"; value: "http://osm.tile.server.address/" }
                PluginParameter { name: "osm.mapping.copyright"; value: "All mine" }
                PluginParameter { name: "osm.routing.host"; value: "http://osrm.server.address/viaroute" }
                PluginParameter { name: "osm.geocoding.host"; value: "http://geocoding.server.address" }


        }
            //map display
            Map {
                anchors.fill: parent
                plugin: mapPlugin
                center: QtPositioning.coordinate(47.80, 13.12) //gaisberg
                zoomLevel: 14
                copyrightsVisible: false

                //route display
                MapPolyline {
                        line.width: 8
                        line.color: 'red'

                        path: [
                            { latitude: 47.80, longitude: 13.12 },
                            { latitude: 47.81, longitude: 13.12 },
                            { latitude: 47.82, longitude: 13.12 },
                            { latitude: 47.83, longitude: 13.12 }
                        ]
                    }


            //clocktime
            Text {
                id: timeText
                x: Window.width - 35
                y:  Window.height - 25
                text: Qt.formatTime(new Date(),"hh:mm")
            }

            //navigator start

            RouteModel{
                id: rm
                plugin: mapPlugin
                query: RouteQuery{
                       id: routeQuery
                }
            }

            Navigator{
                automaticReroutingEnabled: false
                plugin: mapPlugin
               /* route:
                    Route {
                    id: route
                   /* path: {[
                        { latitude: 47.80, longitude: 13.12 },
                        { latitude: 47.81, longitude: 13.12 },
                        { latitude: 47.82, longitude: 13.12 },
                        { latitude: 47.83, longitude: 13.12 }
                    ]}*
                }
*/
                trackPositionSource: false
            }

            Button {
                text: "Start simulation"
                onClicked: Navigator.active
            }


           /*NavigationService {
                id: navigation
                simulation: true // change it to false (default) to perform real turn by turn navigation
                onActiveChanged: {
                    if (active) {
                        mapView.startFollowingPosition();
                        mapView.routeCollection.clear(true /*keepMainRoute*);
                    }
                }
            }

            MapView {
                id: mapView
                anchors.fill: parent
                viewAngle: 25
                cursorVisibility: true
                enableCursor: true

                onRouteSelected: {
                    routeCollection.mainRoute = MapPolyline.path;
                    centerOnRoute(MapPolyline.path);
                    }
                }

            Button {
                text: "Start simulation"
                onClicked: navigation.active
            }
*/
        //navigator end
}
}
