#include "cApp.h"
#include "MainFrame.h"

//equivalent to cpp's main function
wxIMPLEMENT_APP(cApp);

//define application's initialisation
bool cApp::OnInit(){
    //make pointer to new object of type MainFrame and the (title)argument
    MainFrame *ptr_MainFrame = new MainFrame("MAIN-WINDOW-TITLE");
    //access the member function of frame-object via pointer; same as (*ptr).mfunc()
    ptr_MainFrame->Show(true);

    return true;
}
