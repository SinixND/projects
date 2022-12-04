#include "mainApp.h"
#include "MainWindow.h"

//equivalent to cpp's main function
wxIMPLEMENT_APP(mainApp);

//define application's initialisation
bool mainApp::OnInit(){
    //make pointer to new object of type MainWindow and the (title)argument
    MainWindow *ptr_MainWindow = new MainWindow("MAIN-WINDOW-TITLE");
    //access the member function of frame-object via pointer; same as (*ptr).mfunc()
    ptr_MainWindow->Show(true);

    return true;
}
