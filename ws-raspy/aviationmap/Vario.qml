import QtQuick 2.15

Item {
    width: 2 * radius
    height: 2 * radius

    required property double radius
    property double climbRate: 0

    Image {
        anchors.fill: parent
        sourceSize.width: 1024
        sourceSize.height: 1024
        fillMode: Image.PreserveAspectFit
        cache: false
        smooth: true
        antialiasing: true
        mipmap:true
        source: "qrc:/Rescources/Vario/vsi_face.svg"
    }

    Image {
        anchors.fill: parent
        sourceSize.width: 1024
        sourceSize.height: 1024
        fillMode: Image.PreserveAspectFit
        cache: false
        smooth: true
        antialiasing: true
        mipmap:true
        source: "qrc:/Rescources/Vario/vsi_case.svg"
    }

    Image {
        anchors.fill: parent
        sourceSize.width: 1024
        sourceSize.height: 1024
        fillMode: Image.PreserveAspectFit
        cache: false
        smooth: true
        antialiasing: true
        mipmap:true
        source: "qrc:/Rescources/Vario/vsi_hand.svg"
        rotation: 8.6 * climbRate
    }
}
