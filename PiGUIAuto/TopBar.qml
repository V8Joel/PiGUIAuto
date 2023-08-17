import QtQuick
import QtQuick.Controls
import QtQuick.Window

Rectangle {
    id: topBar
    x: 0
    y: 0
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
    width: 1920
    height: 1080 / 20
    color: "#ffffff"

    Text {
        id: dateTime
        x: -65
        y: 14
        color: "#ffffff"
        anchors.centerIn: parent
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
        font.pixelSize: 20
        anchors.verticalCenterOffset: 1
        anchors.horizontalCenterOffset: -774
    }

    Image {
        id: iconLocked
        x: 17
        y: 8
        width: 35
        height: 38
        source: ( systemHandler.carLocked ? "assets/Icons/icon-locked.png" : "assets/Icons/icon-unlocked.png" )
        fillMode: Image.PreserveAspectFit
    }

    Image {
        id: iconWifi
        x: 1808
        y: 8
        width: 35
        height: 38
        source: ( systemHandler.wifiConnection) ? "assets/Icons/icon-wifi-disconnected.png" : "assets/Icons/icon-wifi-connected.png"
        fillMode: Image.PreserveAspectFit
    }

    Image {
        id: iconBluetooth
        x: 1849
        y: 8
        width: 35
        height: 38
        source: ( systemHandler.bluetoothConnection) ? "assets/Icons/icon-bluetooth-disconnected.png" : "assets/Icons/icon-bluetooth-connected.png"
        fillMode: Image.PreserveAspectFit
    }
}
