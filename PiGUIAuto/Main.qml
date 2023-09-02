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

    RPM {
        antialiasing: true
        anchors.left: parent.left
        anchors.leftMargin: 45
        anchors.top: parent.top
        anchors.topMargin: (parent.height - height) / 2
        rpm_target: modelWrapper.rpmOut
        onRpm_targetChanged: {
            console.log(new Date().toISOString(), "RPM Dial changed in QML to: ", rpm_target);
            modelWrapper.rpmIn(slider_value);
        }
    }

    Column {
        anchors.right: parent.right
        anchors.top: parent.top
        anchors.topMargin: (parent.height - height) / 2
        anchors.bottomMargin: (parent.height - height) / 2
        height: 630
        id: slider_padding
        spacing: 50
        width: 400

        Slider_module {
            id: spring_slider
            slider_text: "Spring Constant"
        }

        Slider_module {
            id: mass_slider
            slider_text: "Mass Constant"
        }

        Slider_module {
            id: damper_slider
            slider_text: "Damper Constant"
        }

        Slider_module {
            id: rpm_slider
            slider_text: "RPM Target"
            slider_min: 45
            slider_max: 325
            slider_step: 1
            slider_initial: 45
            onSlider_valueChanged: {
                console.log(new Date().toISOString(), "Slider value changed:", slider_value);
                modelWrapper.rpmIn(slider_value);
            }
        }
    }
}
