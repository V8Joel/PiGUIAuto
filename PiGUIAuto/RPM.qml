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

            RotationAnimator {
                target: rpm_needle_nighttime_mod
                from: -45
                to: 225
                duration: 3000 // rotate over two seconds
                loops: Animation.Infinite
                running: true
            }
        }
    }

}
