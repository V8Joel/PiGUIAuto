import QtQuick

Item {
    width: 1000
    height: 1000
    antialiasing: true

    property int rpm_target: 45
    property int rotation_target: 0

    onRpm_targetChanged: {
        rotation_target = ((rpm_target * (270/8000)) + 45)
    }

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
            rotation: rotation_target
        }
    }
}
