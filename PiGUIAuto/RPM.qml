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
                    // Determine the new target based on the current rotation
                    if (rpm_needle_nighttime_mod.rotation < 90) {
                        rpm_animation.to = 225;
                    } else {
                        rpm_animation.to = -45;
                    }
                    rpm_animation.start();
                }
            }

            SpringAnimation {
                id: rpm_animation
                target: rpm_needle_nighttime_mod
                property: "rotation"
                mass: mass_slider.value
                spring: spring_slider.value
                damping: damping_slider.value

                running: false
            }
        }
    }
}
