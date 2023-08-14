import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Window 2.15

Window {
    id: main_window
    width: 1920
    height: 1080

    visible: true
    title: qsTr("Pi_GUIAuto")

    Rectangle {
        id: bottomBar
        y: 990
        anchors {
            left: parent.left
            right: parent.right
            bottom: parent.bottom
        }

        MouseArea {
            id: bottomBarMouseArea
            x: 0
            y: 0
            width: 1920
            height: 154
        }

        Image {
            id: cool
            x: 616
            y: 37
            width: 89
            height: 81
            source: "assets/icons/icon-cold-blue-48.png"
            fillMode: Image.PreserveAspectFit
        }

        Image {
            id: heat
            x: 1184
            y: 22
            width: 97
            height: 111
            source: "assets/icons/icon-flame.png"
            fillMode: Image.PreserveAspectFit
        }

        MouseArea {
            id: mouseArea
            x: 0
            y: 0
            width: 1920
            height: 154
        }

        Image {
            id: settings_icon
            x: 1760
            y: 0
            width: parent.width / 12

            anchors.right: parent.right
            anchors.top: bottomBar.top
            anchors.bottom: parent.bottom
            height: bottomBar.height
            source: "assets/icons/icon_settings_white_48.png"
            sourceSize.height: 48
            sourceSize.width: 48

            fillMode: Image.Pad
        }

        Button {
            id: settingsButton
            x: 1760
            y: 0
            anchors.top: bottomBar.top
            anchors.bottom: parent.bottom
            anchors.right: parent.right
            icon.color: "#00000000"
            icon.source: "assets/images/icon-settings.svg"
            width: parent.width / 12
            height: bottomBar.height
            opacity: 0
        }

        Slider {
            id: tempSlider
            x: 740
            y: -2
            anchors.top: bottomBar.top
            anchors.bottom: bottomBar.bottom
            snapMode: RangeSlider.SnapOnRelease
            touchDragThreshold: 0
            stepSize: 5
            to: 100
            width: 429
            height: bottomBar.height
            value: 0
        }
        height: parent.height / 7
        border.color: "#00000000"

        anchors.rightMargin: 0
        anchors.bottomMargin: 0
        anchors.leftMargin: 0
        gradient: Gradient {
            orientation: Gradient.Vertical
            GradientStop {
                position: 0
                color: "#000000"
            }

            GradientStop {
                position: 1
                color: "#485563"
            }
        }
    }

    Window {
        id: main_window1
        width: 1920
        height: 1080
        visible: true
        Rectangle {
            height: parent.height / 12
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.bottom: parent.bottom
            gradient: Gradient {
                orientation: Gradient.Vertical
                GradientStop {
                    position: 0
                    color: "#000000"
                }

                GradientStop {
                    position: 1
                    color: "#485563"
                }
            }
        }
        title: qsTr("Pi_GUIAuto")
    }

    Rectangle {
        id: topBar
        x: 0
        y: 926
        height: parent.height / 12
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.top: parent.top
        anchors.bottom: parent.bottom
        anchors.rightMargin: 0
        anchors.bottomMargin: 990
        anchors.leftMargin: 0
        gradient: Gradient {
            orientation: Gradient.Vertical
            GradientStop {
                position: 0
                color: "#000000"
            }

            GradientStop {
                position: 1
                color: "#485563"
            }
        }

        Row {
            id: row
            x: 0
            y: 0
            anchors.left: topBar.left
            anchors.right: topBar.right
            anchors.top: topBar.top
            anchors.bottom: topBar.bottom
            width: 1920
            height: 82

            Image {
                id: doorLock
                width: parent.width / 20
                height: topBar.height
                source: "assets/icons/icons-door-lock-48.png"
                fillMode: Image.Pad
            }

            Image {
                id: image
                width: parent.width / 20
                height: topBar.height
                source: "assets/icons/icon-hazard-warning-flasher-50.png"
                fillMode: Image.Pad
            }
        }

        MouseArea {
            id: topBarMouseArea
            x: 0
            y: 2
            width: parent.width
            height: topBar.height
            anchors.top: topBar.top
            anchors.bottom: topBar.bottom
            anchors.left: topBar.left
            anchors.right: topBar.right
        }
    }

    Rectangle {
        id: rectangle
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.top: topBar.bottom
        anchors.bottom: bottomBar.top
        x: 0
        y: 85
        width: 1920
        height: 835
        color: "#ffffff"
        gradient: Gradient {
            GradientStop {
                position: 0
                color: "#4d4c56"
            }

            GradientStop {
                position: 0.15
                color: "#5b4bfd"
            }

            GradientStop {
                position: 0.24657
                color: "#564bfd"
            }

            GradientStop {
                position: 0.78306
                color: "#62627d"
            }

            GradientStop {
                position: 1
                color: "#000000"
            }

            orientation: Gradient.Vertical
        }

        Image {
            id: bmw1SeriesImage
            x: 0
            y: 0
            width: 1920
            height: 946
            opacity: 0.47
            source: "assets/images/Image_BMW_Silver.png"
            sourceSize.width: 1920
            sourceSize.height: 700
            fillMode: Image.Pad
        }
    }

    StateGroup {
        id: settings
        states: [
            State {
                name: "settings_menu"
                when: settingsButton.checked
            }
        ]
    }
}
