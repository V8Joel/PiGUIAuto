import QtQuick
import QtQuick.Controls

Rectangle {
    id: settingsPage
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

    }
}
