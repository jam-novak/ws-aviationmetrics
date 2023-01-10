import QtQuick 2.15

Item {
    width: 2 * radius
    height: 2 * radius

    required property double radius
    property double altitude: 0
    property double pressure: 0

    Image {
        anchors.fill: parent
        sourceSize.width: 1024
        sourceSize.height: 1024
        fillMode: Image.PreserveAspectFit
        cache: false
        smooth: true
        antialiasing: true
        mipmap:true
        source: "qrc:/Rescources/Altimeter/alt_face_1.svg"
        rotation: {
            var value = pressure
            if      (value < 28.0) value = 28.0
            else if (value > 31.5) value = 31.5

            return (value - 28.0) * 100.0
        }
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
        source: "qrc:/Rescources/Altimeter/alt_face_2.svg"
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
        source: "qrc:/Rescources/Altimeter/alt_face_3.svg"
        rotation: 0.0036 * altitude

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
        source: "qrc:/Rescources/Altimeter/alt_hand_1.svg"  //hunderterstelle
        rotation: 3.6 * (altitude % 100 )
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
        source: "qrc:/Rescources/Altimeter/alt_hand_2.svg"  //meterstelle
        rotation: 3.6 * altitude
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
        source: "qrc:/Rescources/Altimeter/alt_case.svg"
    }
}

