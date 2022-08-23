import QtQuick 2.6
import QtQuick.Controls 2.3

ApplicationWindow {
visible: true
Text {
        text: greeting
            
}
Timer {
        running: true
                onTriggered: Qt.quit()
                    
}

}

