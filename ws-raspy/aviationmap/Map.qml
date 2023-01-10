import QtQuick 2.15
import QtQuick.Window 2.14
import QtLocation 5.6
import QtPositioning 5.6
import QtQuick.Controls 2.5
import QtQuick.Layouts 1.3


Window{
    id: windowid
    minimumWidth: 640
    minimumHeight: 480
    //visibility: Window.Maximized
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
        id: mapid
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
                   { latitude: 47.83, longitude: 13.12 }*/
            ]
        }


        //time
        Text {
            id: timeText
            x: Window.width - 35
            y:  Window.height - 25
            text: Qt.formatTime(new Date(),"hh:mm")
        }

        //instruments
        Item {
            id: itemid
            anchors.fill: parent


            Rectangle{
                id: rect
                height: 150
                width: 150
                x: windowid.width - (rect.width + 10)
                y: windowid.height - (windowid.height - 10)

                Text{
                    id:textid
                    text: "latitude: " + myGlobalObject.getLatitude() + " °" +
                    "\nlongitude: " + myGlobalObject.getLongitude() + " °" +
                    "\nspeed: " + myGlobalObject.getAirspeed() + " km/h" +
                    "\nsteigrate: " + myGlobalObject.getSteigrate() + " °" +
                    "\nroll: " + myGlobalObject.getRoll() + " °" +
                    "\naltitude: " + myGlobalObject.getAltitude() + " m" +
                    "\npressure: " + myGlobalObject.getPressure() + " Pa"
                    font.family: "Arial"
                    x: 10
                    y: 10
                }
            }

            Airspeed {
                Layout.fillHeight: true
                Layout.fillWidth: true
                id: speedometer
                radius: 0.17 * Math.min(parent.width, parent.height)
                airspeed: myGlobalObject.getAirspeed()
                x: 10
                y: 340
            }

            ArtificialHorizon{
                Layout.fillHeight: true
                Layout.fillWidth: true
                id: khorizonz
                radius: 0.17 * Math.min(parent.width, parent.height)
                roll: myGlobalObject.getRoll()
                pitch: myGlobalObject.getSteigrate()
                x: 160
                y: 340
            }

            Altimeter {
                Layout.fillHeight: true
                Layout.fillWidth: true
                id: heightindicator
                radius: 0.17 * Math.min(parent.width, parent.height)
                altitude: myGlobalObject.getAltitude()
                pressure: myGlobalObject.getPressure()
                x: 310
                y: 340
            }

            Vario {
                Layout.fillHeight: true
                Layout.fillWidth: true
                id: wario
                radius: 0.17 * Math.min(parent.width, parent.height)
                climbRate: myGlobalObject.getAltitude()
                x: 460
                y: 340
            }

        }

        /*
        //menubar
        Item{
            MenuBar{
                id: menubar
                menus: [
                    { preferencesmenu },
                    { helpmenu }
                ]

                Menu{
                    id: preferencesmenu
                    title: qsTr("preferences")

                    MenuItem{
                        text: qsTr("show vario")
                        checkable: true
                        checked: true
                        onToggled: wario.visible = true
                    }

                }

                Menu{
                    id: helpmenu
                    title: qsTr("help")

                }

            }
        }

        //Zahlenwerte
        Rectangle{

        }
        */


        Timer {
            id: timer
            interval: 1000      //ms
            repeat: true
            running: true

            //aktualisieren
            onTriggered:
            {
                timeText.text =  Qt.formatTime(new Date(),"hh:mm")
                //mapPolyline.addCoordinate(QtPositioning.coordinate(47.84, 13.12))
                //myGlobalObject.test("TEXT") // NOTE: myGlobalObject is available here because it is set as a context property in main.cpp

                textid.text = "latitude: " + myGlobalObject.getLatitude() + " °" +
                              "\nlongitude: " + myGlobalObject.getLongitude() + " °" +
                              "\nspeed: " + myGlobalObject.getAirspeed() + " km/h" +
                              "\nsteigrate: " + myGlobalObject.getSteigrate() + " °" +
                              "\nroll: " + myGlobalObject.getRoll() + " °" +
                              "\naltitude: " + myGlobalObject.getAltitude() + " m" +
                              "\npressure: " + myGlobalObject.getPressure() + " hPa"

                mapPolyline.addCoordinate((QtPositioning.coordinate(myGlobalObject.getLatitude(), myGlobalObject.getLongitude())))
                //mapid.center = (QtPositioning.coordinate(myGlobalObject.getLatitude(), myGlobalObject.getLongitude()))

                speedometer.airspeed = myGlobalObject.getAirspeed()

                khorizonz.roll = myGlobalObject.getRoll()
                khorizonz.pitch = myGlobalObject.getSteigrate()

                heightindicator.altitude = myGlobalObject.getAltitude()
                heightindicator.pressure = myGlobalObject.getPressure()

                wario.climbRate = myGlobalObject.getSteigrate()
                myGlobalObject.done()
            }
        }
    }
}
