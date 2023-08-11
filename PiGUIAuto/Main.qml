import QtQuick
import QtQuick.Window
import QtQuick.VirtualKeyboard

Window {
    id: window
    width: 1920
    height: 1080

    visible: true
    title: qsTr("Hello World")

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

    Image {
        id: image
        x: 696
        y: 307
        width: 528
        height: 465
        source: "assets/images/istockphoto-996396804-170667a.jpg"
        fillMode: Image.PreserveAspectFit
    }
}
