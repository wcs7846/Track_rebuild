import QtQuick 2.9
import QtQuick.Controls 2.2

Page {
    id: page
    width: 600
    height: 400
    property alias mouseArea_rb: mouseArea_rb
    property alias mouseArea_rr: mouseArea_rr

    header: Label {
        text: qsTr("Page 1")
        font.pixelSize: Qt.application.font.pixelSize * 2
        padding: 10
    }

    Label {
        text: qsTr("You are on Page 1.")
        anchors.verticalCenterOffset: -114
        anchors.horizontalCenterOffset: 0
        anchors.centerIn: parent
    }

    Rectangle {
        id: rectangle_red
        y: 135
        width: 200
        height: 200
        color: "#eb2222"
        anchors.left: parent.left
        anchors.leftMargin: 0
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 0

        MouseArea {
            id: mouseArea_rr
            anchors.fill: parent
        }
    }

    Rectangle {
        id: rectangle_blue
        x: 128
        y: 103
        width: 200
        height: 200
        color: "#3653e4"

        MouseArea {
            id: mouseArea_rb
            anchors.fill: parent
        }
    }
}
