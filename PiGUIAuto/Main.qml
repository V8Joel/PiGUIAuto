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
    title: qsTr("Hello World")

    RPM {
        anchors.verticalCenterOffset: 0
        anchors.horizontalCenterOffset: -419
        anchors.centerIn: parent
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
        x: 18
        y: 14
        width: 261
        height: 76
        color: "#ffbb00"
        text: qsTr("Click the dial:")
        font.pixelSize: 25
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
        font.weight: Font.Bold
        font.family: "Courier"
    }

    Slider {
        id: spring_slider
        x: 1444
        y: 149
        width: 250
        height: 40
        to: 10
        scale: 2
        snapMode: RangeSlider.SnapAlways
        touchDragThreshold: 0
        stepSize: 0.1
        rotation: 0
        value: 5
    }

    Text {
        id: spring_constant_text
        x: 1319
        y: 88
        width: 500
        height: 45
        color: "#ffbb00"
        text: qsTr("Spring Constant")
        font.pixelSize: 25
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
        font.weight: Font.Bold
        font.family: "Courier"
    }

    Text {
        id: spring_slider_text
        x: 1454
        y: 197
        width: 230
        height: 62
        color: "#ffbb00"
        text: spring_slider.value
        font.pixelSize: 30
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
        font.bold: true
        font.family: "Courier"
        textFormat: Text.RichText
    }

    Slider {
        id: damping_slider
        x: 1444
        y: 326
        width: 250
        height: 40
        scale: 2
        snapMode: RangeSlider.SnapAlways
        value: 5
        rotation: 0
        touchDragThreshold: 0
        stepSize: 0.1
        to: 10
    }

    Text {
        id: damping_coefficient_text
        x: 1319
        y: 265
        width: 500
        height: 45
        color: "#ffbb00"
        text: qsTr("Damping Coefficient")
        font.pixelSize: 25
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
        font.family: "Courier"
        font.weight: Font.Bold
    }

    Text {
        id: damping_slider_value
        x: 1454
        y: 374
        width: 230
        height: 62
        color: "#ffbb00"
        text: damping_slider.value
        font.pixelSize: 30
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
        font.family: "Courier"
        font.bold: true
        textFormat: Text.RichText
    }

    Slider {
        id: mass_slider
        x: 1444
        y: 503
        width: 250
        height: 40
        scale: 2
        snapMode: RangeSlider.SnapAlways
        value: 5
        rotation: 0
        touchDragThreshold: 0
        stepSize: 0.1
        to: 10
    }

    Text {
        id: mass_slider_text
        x: 1319
        y: 442
        width: 500
        height: 45
        color: "#ffbb00"
        text: qsTr("Mass")
        font.pixelSize: 25
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
        font.family: "Courier"
        font.weight: Font.Bold
    }

    Text {
        id: text7
        x: 1454
        y: 551
        width: 230
        height: 62
        color: "#ffbb00"
        text: mass_slider.value
        font.pixelSize: 30
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
        font.family: "Courier"
        font.bold: true
        textFormat: Text.RichText
    }
}
