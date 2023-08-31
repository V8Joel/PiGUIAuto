import QtQuick
import QtQuick.Controls

Rectangle {
    width: 350
    height: 120
    color: "grey"
    radius: 20
    border {
        width: 5
        color: "black"
    }

    property double slider_out : Number(value_slider.value.toFixed(2))

    property alias slider_text: slider_text.text
    property alias slider_value: value_slider.value
    property alias slider_min: value_slider.from
    property alias slider_max: value_slider.to
    property alias slider_step: value_slider.stepSize
    property alias slider_initial: value_slider.value


    Text {
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.top: parent.top
        anchors.topMargin: 10
        id: slider_text
        color: "#ffbb00"
        text: qsTr("slider")
        font.pixelSize: 25
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
        font.weight: Font.Bold
        font.family: "Courier"
    }

    Slider {
        id: value_slider
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.top: slider_text.bottom
        anchors.bottom: slider_value.top
        anchors.margins: 10
        height: 25
        to: 10
        scale: 1
        snapMode: RangeSlider.SnapAlways
        touchDragThreshold: 0.1
        stepSize: 0.1
        value: 5

        onValueChanged: {
            slider_out = Number(value.toFixed(2));
        }
    }

    Text {
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 10
        height: 25
        id: slider_value
        color: "#ffbb00"
        text: value_slider.value.toFixed(2) // This converts the number to a string with two decimal places
        font.pixelSize: 25
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
        font.weight: Font.Bold
        font.family: "Courier"
    }
}
