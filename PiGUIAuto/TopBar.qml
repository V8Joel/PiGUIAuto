import QtQuick
import QtQuick.Controls
import QtQuick.Window

Rectangle {
    id: topBar
    x: 0
    y: 0
    width: 1920
    height: 1080/20
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

    Row {
        id: iconRow
        width: 400
        anchors.top: parent.top
        anchors.right: parent.right
        anchors.bottom: parent.bottom
        spacing: 0

        Text {
            id: dateTime
            width: 150
            anchors.left: iconBattery.right
            font.pointSize: 20
            anchors.leftMargin: 15
            color: "#ffffff"
            text: {
                var now = new Date()
                var day = now.getDate()
                var month = now.getMonth() + 1
                // Months are zero-indexed
                var year = now.getFullYear()
                var hours = now.getHours()
                var minutes = now.getMinutes()

                // Format the time components to have leading zeros if needed
                var formattedTime = (hours < 10 ? "0" : "") + hours + ":"
                        + (minutes < 10 ? "0" : "") + minutes

                // Format the date and time in short form
                return day + "/" + month + "/" + year + " " + formattedTime
            }
            anchors.verticalCenter: parent.verticalCenter
        }

        Image {
            id: iconWifi
            width: 35
            anchors.left: iconRow.left
            anchors.top: parent.top
            anchors.bottom: parent.bottom
            source: "assets/Icons/icon-wifi-disconnected.png"
            fillMode: Image.PreserveAspectFit
        }

        Image {
            id: iconBluetooth
            width: 35
            anchors.left: iconWifi.right
            anchors.top: parent.top
            anchors.bottom: parent.bottom
            source: "assets/Icons/icon-bluetooth-unconnected.png"
            fillMode: Image.PreserveAspectFit
        }

        Image {
            id: iconSignal
            width: 35
            anchors.left: iconBluetooth.right
            anchors.top: parent.top
            anchors.bottom: parent.bottom
            source: "assets/Icons/icon-low-signal.png"
            fillMode: Image.PreserveAspectFit
        }

        Image {
            id: iconBattery
            width: 35
            anchors.left: iconSignal.right
            anchors.top: iconSignal.bottom
            anchors.bottom: parent.bottom
            source: "assets/Icons/icon-battery-charging.png"
            anchors.leftMargin: 7
            anchors.topMargin: -48
            fillMode: Image.PreserveAspectFit
        }

    }

    Image {
        id: iconUser
        x: 52
        width: 41
        anchors.top: parent.top
        anchors.bottom: parent.bottom
        source: "assets/Icons/icon-user.png"
        sourceSize.height: 60
        sourceSize.width: 60
        anchors.bottomMargin: 9
        anchors.topMargin: 0
        fillMode: Image.Stretch

        Text {
            id: userName
            anchors.left: iconUser.right
            color: "#ffffff"
            text: qsTr(systemHandler.userName)
            anchors.verticalCenter: iconUser.verticalCenter
            font.pixelSize: 20
            anchors.leftMargin: -6
            anchors.verticalCenterOffset: 0
        }
    }
}

