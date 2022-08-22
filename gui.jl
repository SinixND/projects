using QML
mktempdir() do folder
	path = joinpath(folder, "main.qml")	
	write(path, """
	import QtQuick 2.0
	import QtQuick.Controls 1.0
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
	""")
	loadqml(path; greeting = "Hello, World!")
	exec()
end
