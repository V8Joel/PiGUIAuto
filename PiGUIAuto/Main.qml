import QtQuick
import QtQuick.Window
import QtQuick.Controls
import QtQuick.Layouts

Window {
    id: window
    width: 1920
    height: 900

    visible: true
    color: "#000000"
    title: qsTr("RPM Dial Test")

//    property int rpm_target: 1000
//    property int rotation_target: -135

    Slider_module {
        id: rpm_slider
        x: 1106
        y: 752
        slider_text: "RPM Target"
        slider_min: 0
        slider_max: 8000
        slider_step: 10
        slider_initial: 0
        onSlider_valueChanged: {
            console.log(new Date().toISOString(), "RPM Target changed:", rpm_slider.slider_value);
            modelWrapper.rpmIn(slider_value);
        }
    }
    Slider_module {
        id: speed_slider
        x: 504
        y: 752
        slider_text: "Speed Target"
        slider_min: 0
        slider_max: 130
        slider_step: 1
        slider_initial: 0
        onSlider_valueChanged: {
            console.log(new Date().toISOString(), "Speed Target changed:", speed_slider.slider_value);
            modelWrapper.speedIn(slider_value);
        }
    }

    Image {
        id: cluster
        x: 0
        y: -84
        width: 1920
        height: 932
        source: "assets/images/Patrol.PNG"
        fillMode: Image.PreserveAspectFit

        Image {
            id: rpm_dial
            x: 961
            y: 165
            width: 600
            height: 600
            source: "assets/images/Patrol_Large_Needle.PNG"
            fillMode: Image.PreserveAspectFit
            rotation: ((modelWrapper.rpmOut * (270/8000)) - 135);
        }
        Image {
            id: speed_dial
            x: 359
            y: 165
            width: 600
            height: 600
            source: "assets/images/Patrol_Large_Needle.PNG"
            fillMode: Image.PreserveAspectFit
            rotation: ((modelWrapper.speedOut * (270/130)) - 135);
        }
        Image {
            id: fuel_dial
            x: -27
            y: 177
            width: 300
            height: 300
            source: "assets/images/Patrol_Small_Needle.PNG"
            fillMode: Image.PreserveAspectFit
            rotation: ((modelWrapper.fuelPcOut * (90/100)) + 135);
        }
        Image {
            id: volt_dial
            x: -27
            y: 453
            width: 300
            height: 300
            source: "assets/images/Patrol_Small_Needle.PNG"
            fillMode: Image.PreserveAspectFit
            rotation: ((modelWrapper.voltOut * (90/100)) + 135);
        }
    }
}
