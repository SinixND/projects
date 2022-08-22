using QML
component = QQmlComponent(init_qmlengine())
set_data(component, QByteArray("""
    import QtQuick 2.0
    import QtQuick.Controls 1.0
    ApplicationWindow {
        visible: true
        Rectangle {
            Text {
                text: "Hello World!"
            }
            Timer {
                running: true
                onTriggered: Qt.quit()
            }
        }
    }
"""), QUrl())
create(component, qmlcontext())
exec()
