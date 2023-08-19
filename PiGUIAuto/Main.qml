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

    Component.onCompleted: {
        // Log with timestamp
        console.log(new Date().toISOString(), "SimulinkModel Output:", simulinkModel.test2Output);
        simulinkModel.setInput(simulink_slider.slider_value);
        console.log(new Date().toISOString(), "Set input to", simulink_slider.slider_value);
    }
    RPM {
        antialiasing: true
        anchors.left: parent.left
        anchors.leftMargin: 45
        anchors.top: parent.top
        anchors.topMargin: (parent.height - height) / 2
        spring: spring_slider.slider_out
        mass: mass_slider.slider_out
        damping: damper_slider.slider_out
        rpm_target: simulinkModel.test2Output
    }

    Column {
        anchors.right: parent.right
        anchors.top: parent.top
        anchors.topMargin: (parent.height - height) / 2
        anchors.bottomMargin: (parent.height - height) / 2
        height: 800
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
        }

        Slider_module {
            id: simulink_slider
            slider_step: 1
            slider_min: 0
            slider_initial: 5
            slider_text: "Output"
            slider_max: 10
        }
    }
}
