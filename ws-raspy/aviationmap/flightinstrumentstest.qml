
import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Layouts 1.0

Window {
    visible: true
    minimumWidth: 800
    minimumHeight: 600
    visibility: Window.Maximized
    title: "Basic Six Example"
    color: "#ffffff"
/*
    GridLayout {
        columns: 3

        anchors {
            fill: parent
            margins: 16
        }

        Item {
            Layout.fillWidth: true
            Layout.fillHeight: true

            Airspeed {
                radius: 0.1 * Math.min(parent.width, parent.height)
                airspeed: myGlobalObject.getAirspeed()
            }
        }

        Item{
            Layout.fillWidth: true
            Layout.fillHeight: true

            ArtificialHorizon{
                radius: 0.1 * Math.min(parent.width, parent.height)
                roll: myGlobalObject.getRoll()
                pitch: myGlobalObject.getSteigrate()
            }
        }

        Item {
            Layout.fillWidth: true
            Layout.fillHeight: true

            Altimeter {
                radius: 0.1 * Math.min(parent.width, parent.height)
                altitude: myGlobalObject.getAltitude()
                pressure: myGlobalObject.getPressure()
            }
        }

        Item {
            Layout.fillWidth: true
            Layout.fillHeight: true

            Vario {
                radius: 0.5 * Math.min(parent.width, parent.height)
                climbRate: pfd.climbRate
            }
        }
    }
    */
}
