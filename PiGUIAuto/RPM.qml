import QtQuick

Item {
    width: 1000
    height: 1000
    antialiasing: true

    property alias mass : rpm_animation.mass
    property alias spring : rpm_animation.spring
    property alias damping : rpm_animation.damping


    Image {
        id: gauge
        x: 0
        y: 0
        width: 1000
        height: 1000
        source: "assets/images/rpm_face_daytime.PNG"
        fillMode: Image.PreserveAspectFit

        Image {
            id: rpm_needle
            x: 0
            y: 0
            width: 1000
            height: 1000
            source: "assets/images/rpm_needle_daytime_2_unmod.PNG"
            rotation: 45
            fillMode: Image.PreserveAspectFit

            MouseArea {
                anchors.fill: parent
                onClicked: {
                    // Determine the new target based on the current rotation
                    if (rpm_needle.rotation < 180) {
                        rpm_animation.to = 315;
                    } else {
                        rpm_animation.to = 45;
                    }
                    rpm_animation.start();
                }
            }

            SpringAnimation {
                id: rpm_animation
                target: rpm_needle
                property: "rotation"
                mass: 1
                spring: 1
                damping: 1
                running: false
            }
        }
    }
}
