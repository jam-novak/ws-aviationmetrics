
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
    }
}
