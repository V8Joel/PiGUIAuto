import QtQuick
import QtQuick.Controls

Rectangle {
    width: 350
    height: 100
    color: "grey"
    radius: 20

    property alias slider_text: slider_text.text
    property alias slider_value: value_slider.value

    Column {
        anchors.left:parent.left
        anchors.right:parent.right
        anchors.top:parent.top
        anchors.bottom:parent.bottom
        spacing: 20

        Text {
            anchors.left: parent.left
            anchors.right: parent.right
            height: 25
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
        }
        Text {
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.bottom: parent.bottom
            height: 25
            id: slider_value
            color: "#ffbb00"
            text: value_slider.value
            font.pixelSize: 25
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
            font.weight: Font.Bold
            font.family: "Courier"
        }
    }
}
