#include "cApp.h"
#include "cFrameMain.h"

//equivalent to cpp's main function
wxIMPLEMENT_APP(cApp);

//define application's initialisation
bool cApp::OnInit(){
    //make pointer to new object of (custom) frame type  and the (title)argument
    cFrameMain *p_FrameMain = new cFrameMain("MAIN-WINDOW-TITLE");
    //access the member function of frame-object via pointer; same as (*p).mfunc()
    p_FrameMain->Show(true);

    return true;
}
