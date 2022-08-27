//import QtQuick 2.6
//import QtQuick.Controls 2.3
//import QtQuick.Window 2.0
//import org.julialang 1.0

Rectangle {
        id: cell
        width: parent.width/bsc 
        height: parent.height/bsr 
        color: "#ffffff" 
        //x:rptr.itemAt(index).children[1]*parent.width/5 
        x:bsc*parent.height/bsc
        y:bsr*parent.width/bsr
        Text {
            text: bsr
            color: "red"
        }
}
