import QtQuick
import QtQuick.Window
import QtQuick.VirtualKeyboard

Window {
    id: window
    width: 1920
    height: 1080

    visible: true
    color: "#000000"
    title: qsTr("Hello World")

    RPM {
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
}
