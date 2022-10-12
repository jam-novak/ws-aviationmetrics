import QtQuick 2.15
import QtQuick.Window 2.14
import QtLocation 5.6
import QtPositioning 5.6
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12
//import GeneralMagic 2.0

    Window{
        width: 640
        height: 480
        visible: true

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


        }



            RouteModel {
                       id: rm
                       plugin: mapPlugin
                       query: RouteQuery {id: routeQuery }
              }


            Map {
                anchors.fill: parent
                plugin: mapPlugin
                center: QtPositioning.coordinate(47.80, 13.12) //gaisberg
                zoomLevel: 14
                copyrightsVisible: false

                Button{
                    text: "hello"
                    onClicked: {routeQuery.addWaypoint(QtPositioning.coordinate(47.80, 13.12));
                               routeQuery.addWaypoint(QtPositioning.coordinate(48.80, 13.12));
                               rm.update();
                               routeQuery.addWaypoint(QtPositioning.coordinate(49.80, 13.12));
                               routeQuery.addWaypoint(QtPositioning.coordinate(50.80, 13.12));
                               rm.update();
                               }
                }


              MapItemView {
                          model: rm
                          delegate: routeDelegate
              }

              Component{
                        id: routeDelegate
                        MapRoute {
                               route: routeData
                               line.color: "red"
                               line.width: 10
                               smooth: true
                               opacity: 0.8
                           }
                       }
                   }
        }


