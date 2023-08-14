import QtQuick

Item {
    width: 1000
    height: 1000
    antialiasing: true

    property alias mass : rpm_animation.mass
    property alias spring : rpm_animation.spring
    property alias damping : rpm_animation.damping
    property real rpm_target: 45

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
            fillMode: Image.PreserveAspectFit
//            rotation: rpm_target
        }
    }
    Behavior on rpm_target {
        SpringAnimation {
            id: rpm_animation
            target: rpm_needle
            property: "rotation"
            to: rpm_target
            mass: 1
            spring: 1
            damping: 1
//          epsilon: 0.1
            velocity: 1000
        }
    }
}
