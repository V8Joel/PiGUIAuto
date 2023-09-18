import QtQuick
import QtQuick.Window
import QtQuick.Controls
import QtQuick.Layouts

Window {
    id: window
    width: 1920
    height: 1080

    visible: true
    color: "#343434"
    title: qsTr("RPM Dial Test")

    property int rpm_target: 1000
    property int rotation_target: -135

    Slider_module {
        id: rpm_slider
        x: 37
        y: 922
        slider_text: "RPM Target"
        slider_min: 0
        slider_max: 8000
        slider_step: 10
        slider_initial: 0
        onSlider_valueChanged: {
            console.log(new Date().toISOString(), "Slider value changed:", slider_value);
            modelWrapper.rpmIn(slider_value);
        }
    }

    Image {
        id: cluster
        x: 0
        y: 0
        width: 1920
        height: 1080
        source: "assets/images/Patrol.PNG"
        fillMode: Image.PreserveAspectFit

        Image {
            id: rpm_dial
            x: 962
            y: 240
            width: 600
            height: 600
            source: "assets/images/Patrol_Large_Needle.PNG"
            fillMode: Image.PreserveAspectFit
            rotation: ((modelWrapper.rpmOut * (270/8000)) - 135);
        }
    }
}
