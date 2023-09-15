import QtQuick
import QtQuick.Controls
import QtQuick.Window

Rectangle {
    id: settingsPage
    x: 0
    y: 0
    width: 1920
    height: 1080
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


        TopBar{
            anchors.top: parent.top
            anchors.left: parent .left
            anchors.right: parent.right
        }

        BottomBar{
            anchors.bottom: parent.bottom
            anchors.left: parent .left
            anchors.right: parent.right
        }

        SwipeView {
            id: swipeView
            x: 30
            y: 118
            width: parent.width
            height: parent.height/1.5
            currentIndex: 0

            Item{
                id: settingsMenu1
                    Image {
                        id: wifiSettings
                        source: "assets/images/wifi.png"
                        width: parent.width/3
                        height: parent.height
                    }

                }

            Item{
                id: settingsMenu2
                Image {
                    id: bluetoothSettings
                    source: "assets/images/bluetooth.png"
                    width: parent.width/3
                    height: parent.height
                }
            }

            Item{
                id: audioMenu
                Rectangle{
                    width: parent.width/3
                    height: parent.height

                }
            }


        }

    }
}
