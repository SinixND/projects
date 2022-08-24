using QML
using Qt5QuickControls2_jll

qml_file = joinpath(dirname(@__FILE__), "qml", "gui.qml")

loadqml(
        qml_file,
        greeting = "Hello, World!"

       )

# Start the GUI
exec()
