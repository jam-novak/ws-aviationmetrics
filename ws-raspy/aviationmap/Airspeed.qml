import QtQuick 2.15

Item {
    width: 2 * radius
    height: 2 * radius

    required property double radius
    property double airspeed: 0
    property double angle: 37.0

    onAirspeedChanged: update();

    function update(){

        if      (airspeed <=   0.0) angle = 37.0
        //else if (airspeed > 185.0) angle = 185.0

        if (airspeed <  30.0) angle =   37.0 + 1.76 * (airspeed - 0)
        else if (airspeed < 75.0) angle =   90.0 + 2.0 * (airspeed -  30.0)
        else if (airspeed < 90.0) angle =  181.0 + 1.8 * (airspeed - 75.0)
        else if (airspeed < 125.0) angle = 212.0 + 1.6285 * (airspeed - 90)
        else                    angle =  270.0 + 0.672 * (airspeed - 125.0)

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

        source: "qrc:/Rescources/Airspeed/asi_face.png"
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

        source: "qrc:/Rescources/Airspeed/asi_case.svg"
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

        source: "qrc:/Rescources/Airspeed/asi_hand.svg"
        rotation: angle
    }

}
