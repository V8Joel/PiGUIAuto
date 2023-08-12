import QtQuick
import QtQuick.Window
import QtQuick.VirtualKeyboard
import QtQuick.Controls
import QtCharts
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
        anchors.left:parent.left
        anchors.leftMargin: 45
        anchors.top: parent.top
        anchors.topMargin: (parent.height - height) / 2
        spring: spring_slider.slider_value
        mass: mass_slider.slider_value
        damping: damper_slider.slider_value

    }

    InputPanel {
        id: inputPanel
        z: 99
        x: 0
        y: window.height
        width: window.width

        states: State {
            name: "visible"
            when: inputPanel.active
            PropertyChanges {
                target: inputPanel
                y: window.height - inputPanel.height
            }
        }
        transitions: Transition {
            from: ""
            to: "visible"
            reversible: true
            ParallelAnimation {
                NumberAnimation {
                    properties: "y"
                    duration: 250
                    easing.type: Easing.InOutQuad
                }
            }
        }
    }

    Text {
        id: click
        anchors.left: parent.left
        anchors.top: parent.top
        anchors.margins: 50
        width: 250
        height: 25
        color: "#ffbb00"
        text: qsTr("Click the dial:")
        font.pixelSize: 25
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
        font.weight: Font.Bold
        font.family: "Courier"
    }

    Column {
        anchors.right: parent.right
        anchors.top: parent.top
        anchors.topMargin: (parent.height - height) / 2
        height: 400
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
    }
}
