import QtQuick
import QtQuick.Controls
import QtQuick.Window

Rectangle {
    id: bottomBar
    x: 0
    y: 872
    anchors.bottom: parent.bottom
    gradient: Gradient {
        orientation: Gradient.Vertical
        GradientStop {
            position: 0
            color: "#434343"
        }

        GradientStop {
            position: 1
            color: "#000000"
        }
    }
    anchors.left: parent.left
    anchors.right: parent.right
    width: 1920
    height: 1080 / 8
    color: "#4d3c3d"

    MouseArea {
        id: bottomBarMouseArea
        width: parent.width
        height: bottomBar.height
        anchors.left: bottomBar.left
        anchors.right: bottomBar.right
        anchors.top: bottomBar.top
        anchors.bottom: bottomBar.bottom
    }

    Image {
        id: iconCold
        x: 701
        y: 38
        width: 62
        height: 62
        source: "assets/Icons/icon-cold.png"
        fillMode: Image.PreserveAspectFit

        MouseArea {
            id: mouseAreaCold
            anchors.fill: parent
        }
    }

    Image {
        id: iconHazard
        x: 175
        y: 27
        width: 77
        height: 78
        source: "assets/Icons/icon-hazard.png"
        fillMode: Image.PreserveAspectFit

        MouseArea {
            id: mouseAreaHazard
            anchors.fill: parent
        }
    }

    Image {
        id: iconHeat
        x: 1178
        y: 35
        width: 74
        height: 65
        source: "assets/Icons/icon-heater.png"
        fillMode: Image.PreserveAspectFit

        MouseArea {
            id: mouseAreaHeat
            anchors.fill: parent
        }
    }

    Image {
        id: iconDoor
        x: 298
        y: 26
        width: 102
        height: 85
        source: "assets/Icons/icon-door-lock.png"

        fillMode: Image.PreserveAspectFit

        MouseArea {
            id: mouseAreaDoor
            anchors.fill: parent
            onClicked: systemHandler.setcarLocked(!systemHandler.carLocked)
        }
    }

    Image {
        id: iconsSettings
        x: 1788
        y: 17
        width: 100
        height: 100
        source: "assets/Icons/icon-settings.png"
        fillMode: Image.PreserveAspectFit

        MouseArea {
            id: mouseAreaSettings
            anchors.fill: parent
            onClicked: {
                // Handle the click event to transition to the settings page
                stackView.push(Qt.resolvedUrl("SettingsPage.qml"))
            }
        }
    }

    Slider {
        id: slider
        x: 785
        y: 26
        width: 366
        height: 82
        value: 0.5
    }

    Image {
        id: iconHome
        x: 41
        y: 31
        width: 78
        height: 73
        source: "assets/Icons/icon-home.png"
        fillMode: Image.PreserveAspectFit

        MouseArea {
            id: mouseAreaHome
            anchors.fill: parent
        }
    }
}
