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

            TopBar {
                x: 0
                anchors.top: parent.top
                width: parent.width
                height: parent.height / 20
            }

            BottomBar {
                x: 0
                anchors.bottom: parent.bottom
                anchors.left: parent.left
                anchors.right: parent.right
                height: parent.height / 8
            }
        }
    }
}
