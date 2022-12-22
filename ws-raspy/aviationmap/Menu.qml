import QtQuick 2.15
import QtQuick.Window 2.14
import QtQuick.Controls 2.5
import QtQuick.Layouts 1.3


Window{
    id: windowmenu
    width: 768
    height: 1024
    //visibility: Window.Maximized
    visible: true

    Image{
        source: "qrc:/Rescources/Menu/background.jpg"
        fillMode: Image.PreserveAspectCrop
        anchors.fill: parent

        RowLayout{
            Button{
                id: viewflight
                text: "view flight"
                onClicked:
                {
                    myGlobalObject.viewFlight()
                    windowmenu.visible = false
                }
            }

            Button{
                id: startflight
                text: "start flight"
                onClicked:
                {
                    myGlobalObject.startFlight()
                    windowmenu.visible = false
                }
            }
        }
    }
}
