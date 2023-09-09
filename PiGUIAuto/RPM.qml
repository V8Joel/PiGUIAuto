import QtQuick

Item {
    width: 1000
    height: 1000
    antialiasing: true

    property int angle_target: 45
    property int rpm_target: 0
    readonly property int max_rpm: 8000
    readonly property int start_angle: 45


    onRpm_targetChanged: {
        angle_target = (rpm_target * (270 / max_rpm) + start_angle);
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
            rotation: angle_target
        }
    }
}
