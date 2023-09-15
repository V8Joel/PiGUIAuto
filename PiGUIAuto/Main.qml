import QtQuick
import QtQuick.Controls
import QtQuick.Window

Window {
    visible: true
    width: 1920
    height: 1080
    title: "PiGUIAuto"

    StackView {
        id: stackView
        initialItem: mainPage
        anchors.fill: parent
    }

    TopBar {
        anchors.top: parent.top
        anchors.left: parent.left
        anchors.right: parent.right
    }

    BottomBar {
        anchors.bottom: parent.bottom
        anchors.left: parent.left
        anchors.right: parent.right
    }

    Rectangle {
        id: mainPage
        Rectangle {
            id: mainWindow
            x: 0
            y: 0
            width: 1920
            height: 1080

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

            Image {
                id: iconCarplay
                x: 156
                y: 474
                width: 116
                height: 121
                source: "assets/images/apple-carplay.png"
                sourceSize.height: 150
                sourceSize.width: 150
                fillMode: Image.PreserveAspectCrop

                MouseArea {
                    id: carplayMouseArea
                    anchors.fill: parent
                    onClicked: {
                        apkbinder.launchApp()
                    }
                }
            }
        }
    }
}
