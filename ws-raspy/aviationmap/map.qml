import QtQuick 2.15
import QtQuick.Window 2.14
import QtLocation 5.6
import QtPositioning 5.6
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12
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
                        id: mapPolyline
                        line.width: 8
                        line.color: 'red'

                        path: [
                            { latitude: 47.80, longitude: 13.12 },
                            { latitude: 47.81, longitude: 13.12 },
                           /* { latitude: 47.82, longitude: 13.12 },
                            { latitude: 47.83, longitude: 13.12 } */
                        ]
                    }
                //redundant
                Route{
                    id: myroute
                    path: mapPolyline.path

                }


            //clocktime
            Text {
                id: timeText
                x: Window.width - 35
                y:  Window.height - 25
                text: Qt.formatTime(new Date(),"hh:mm")
            }



                Airspeed {
                    anchors.fill: parent
                    id: speedometer
                    radius: 0.2 * Math.min(parent.width, parent.height)
                    airspeed: myGlobalObject.getAirspeed()
                }


            //1 min
            Timer {
                id: timer
                interval: 1000      //ms
                repeat: true
                running: true

                onTriggered:
                {
                    timeText.text =  Qt.formatTime(new Date(),"hh:mm")
                    //mapPolyline.addCoordinate(QtPositioning.coordinate(47.84, 13.12))
                    //myGlobalObject.test("TEXT") // NOTE: myGlobalObject is available here because it is set as a context property in main.cpp
                    mapPolyline.addCoordinate((QtPositioning.coordinate(myGlobalObject.getLatitude(), myGlobalObject.getLongitude())))
                    speedometer.airspeed = myGlobalObject.getAirspeed()

                }
            }
        }
    }

