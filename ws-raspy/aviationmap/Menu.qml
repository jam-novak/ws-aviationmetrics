import QtQuick 2.15
import QtQuick.Window 2.14


Window{
    width: 768
    height: 1024
    //visibility: Window.Maximized
    visible: true

    Image{
        source: "qrc:/Rescources/Menu/background.jpg"
        fillMode: Image.PreserveAspectCrop
        anchors.fill: parent
    }

}
