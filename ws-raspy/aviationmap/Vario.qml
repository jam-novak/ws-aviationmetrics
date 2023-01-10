import QtQuick 2.15

Item {
    width: 2 * radius
    height: 2 * radius

    required property double radius
    property double climbRate: 0
    property double dumm: 90
    property double angle: 270 + dumm

    onClimbRateChanged: update()

    Image {
        anchors.fill: parent
        sourceSize.width: 1024
        sourceSize.height: 1024
        fillMode: Image.PreserveAspectFit
        cache: false
        smooth: true
        antialiasing: true
        mipmap:true
        source: "qrc:/Rescources/Vario/vsi_face.png"
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
        rotation: angle
    }

    function update(){
       if ( climbRate < -2.5 ){
           angle = 180 - 36 * ( climbRate - 2.5 ) + dumm
       }
       else if ( climbRate < 0 ){
           angle = 270 - 36 * climbRate + dumm
       }
       else if ( climbRate < 2.5 ){
          angle = 270 + 36 * climbRate + dumm
       }
       else if( climbRate <= 5 ){
           angle = 36 * ( climbRate - 2.5 ) + dumm
       }
    }
}
