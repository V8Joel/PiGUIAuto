import QtQuick
import QtQuick.Window
import QtQuick.Controls

Window {
    width: 1920
    height: 1080
    visible: true
    title: qsTr("PiGUIAuto")

    Rectangle {
        id: mainWindow
        x: 0
        y: 0
        width: 1920
        height: 1080

        color: "white"
        gradient: Gradient {
            orientation: Gradient.Vertical
            GradientStop {
                position: 0
                color: "#000000"
            }

            GradientStop {
                position: 0.29
                color: "#29258f"
            }

            GradientStop {
                position: 0.50562
                color: "#b0adff"
            }

            GradientStop {
                position: 0.88127
                color: "#0a0a0f"
            }
        }

        Rectangle {
            id: topBar
            x: 0
            y: 0
            anchors.top: parent.top
            gradient: Gradient {
                orientation: Gradient.Vertical
                GradientStop {
                    position: 1
                    color: "#434343"
                }

                GradientStop {
                    position: 0
                    color: "#000000"
                }

                GradientStop {
                    position: 0.55251
                    color: "#434343"
                }
            }
            anchors.left: parent.left
            anchors.right: parent.right
            width: parent.width
            height: parent.height / 20
            color: "#ffffff"

            Image {
                id: iconLocked
                x: 17
                y: 8
                width: 35
                height: 38
                fillMode: Image.PreserveAspectFit
                source: (systemHandler.carLocked ? "assets/Icons/icon-locked.png" : "assets/Icons/icon-unlocked.png")
            }
            Text {
                id: dateTime
                x: -65
                y: 14
                color: "#ffffff"
                anchors.centerIn: parent
                text: new Date().toLocaleString()
                font.pixelSize: 20
                anchors.verticalCenterOffset: 1
                anchors.horizontalCenterOffset: -774
            }
        }

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
            width: parent.width
            height: parent.height / 8
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
                    onClicked: systemHandler.setcarLocked(
                                   !systemHandler.carLocked)
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
                    onClicked: settingsState.state = "settingsState1"
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
                    onClicked: settingsState.state = ""
                }
            }
        }

        Image {
            id: bmwImage
            x: -270
            y: 116
            width: parent.width
            height: 887
            opacity: 0.47
            source: "assets/Images/Image_BMW_Silver.png"
            sourceSize.height: 600
            sourceSize.width: 1920
            fillMode: Image.Pad
        }
    }

    StateGroup {
        id: settingsState
        states: [
            State {
                name: "settingsState1"

                PropertyChanges {
                    target: bmwImage
                    visible: false
                }
            }
        ]
    }
}
