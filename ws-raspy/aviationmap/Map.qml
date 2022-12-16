import QtQuick 2.15
import QtQuick.Window 2.14
import QtLocation 5.6
import QtPositioning 5.6
import QtQuick.Controls 2.5
import QtQuick.Layouts 1.3


Window{
    minimumWidth: 640
    minimumHeight: 480
    visibility: Window.Maximized
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
                   { latitude: 47.83, longitude: 13.12 } */
            ]
        }
        //redundant
        Route{
            id: myroute
            path: mapPolyline.path
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
            anchors.fill: parent
            width: 100
            height: 100

            GridLayout {
                columns: 4

                anchors {
                    fill: parent
                    margins: 16
                }

                Airspeed {
                    /* Layout.row: 0
                    Layout.column: 0*/
                    Layout.fillHeight: true
                    Layout.fillWidth: true
                    id: speedometer
                    radius: 0.1 * Math.min(parent.width, parent.height)
                    airspeed: myGlobalObject.getAirspeed()
                }

                ArtificialHorizon{
                    /* Layout.row: 0
                    Layout.column: 1*/
                    Layout.fillHeight: true
                    Layout.fillWidth: true
                    id: khorizonz
                    radius: 0.1 * Math.min(parent.width, parent.height)
                    roll: myGlobalObject.getRoll()
                    pitch: myGlobalObject.getSteigrate()
                }

                Altimeter {
                    /*Layout.row: 0
                    Layout.column: 2*/
                    Layout.fillHeight: true
                    Layout.fillWidth: true
                    id: heightindicator
                    radius: 0.1 * Math.min(parent.width, parent.height)
                    altitude: myGlobalObject.getAltitude()
                    pressure: myGlobalObject.getPressure()
                }

                Vario {
                    /*Layout.row: 0
                    Layout.column: 3*/
                    Layout.fillHeight: true
                    Layout.fillWidth: true
                    id: wario
                    radius: 0.1 * Math.min(parent.width, parent.height)
                    climbRate: myGlobalObject.getAltitude()
                }
            }
        }

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

        //1 min
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



                mapPolyline.addCoordinate((QtPositioning.coordinate(myGlobalObject.getLatitude(), myGlobalObject.getLongitude())))
                mapid.center = (QtPositioning.coordinate(myGlobalObject.getLatitude(), myGlobalObject.getLongitude()))

                speedometer.airspeed = myGlobalObject.getAirspeed()

                khorizonz.roll = myGlobalObject.getRoll()
                khorizonz.pitch = myGlobalObject.getSteigrate()

                heightindicator.altitude = myGlobalObject.getAltitude()
                heightindicator.pressure = myGlobalObject.getPressure()

                wario.climbRate = myGlobalObject.getAltitude()
            }
        }
    }
}

