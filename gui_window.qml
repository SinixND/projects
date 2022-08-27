import QtQuick 2.6
import QtQuick.Controls 2.3
import QtQuick.Window 2.0
import org.julialang 1.0

ApplicationWindow{
    id: window
    property ApplicationWindow appWindow : window
    width: Screen.desktopAvailableWidth
    height: Screen.desktopAvailableHeight
    color: "#000000"
    visible: true

    /*Rectangle {
        id: page
        width: parent.width/bsc 
        height: parent.height/bsr 
        color: "#ffffff" 
        //x:rptr.itemAt(index).children[1]*parent.width/5 
        x:index*parent.height/bsc
        y:(index+1)*parent.width/bsr
        Text {
            text: row
            color: "red"
        }
        }*/
}
