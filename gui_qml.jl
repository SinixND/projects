using Pkg
Pkg.activate(".")
Pkg.instantiate()

using QML
using Qt5QuickControls2_jll

component = QQmlComponent(init_qmlengine());

set_data(component, QByteArray("""
	import QtQuick 2.6
	import QtQuick.Controls 2.3

	ApplicationWindow{
		visible: true
		Text{
			text: "Hello World!"
		}
	}
"""), QUrl())

create(component, qmlcontext())
exec()
