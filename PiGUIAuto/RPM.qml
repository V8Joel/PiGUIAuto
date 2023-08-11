import QtQuick

Item {
    width: 1000
    height: 1000

    Image {
        id: gauge
        x: 0
        y: 0
        width: 1000
        height: 1000
        source: "assets/images/rpm_face_nighttime.PNG"
        fillMode: Image.PreserveAspectFit

        Image {
            id: rpm_needle_nighttime_mod
            x: 0
            y: 0
            width: 1000
            height: 1000
            source: "assets/images/rpm_needle_nighttime_mod.PNG"
            rotation: -45
            fillMode: Image.PreserveAspectFit

            MouseArea {
                    anchors.fill: parent
                    onClicked: {
                        rpm_needle_nighttime_mod.rotation = rpm_needle_nighttime_mod.rotation === -45 ? 225 : -45;
                    }
                }

                Behavior on rotation {
                    NumberAnimation {
                        duration: 2000
                        easing.type: Easing.InOutSine
                    }
                }

                // Add the SpringAnimation
                SpringAnimation {
                    target: rpm_needle_nighttime_mod
                    property: "rotation"
                    spring: 2
                    damping: 0.2
                    modulus: 270  // To keep rotation in the range of [0, 360)
                }
        }
    }

}
