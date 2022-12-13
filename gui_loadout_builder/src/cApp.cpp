#include "cApp.h"
#include "cFrames.h"

//equivalent to cpp's main function
wxIMPLEMENT_APP(cApp);

//define application's initialisation
bool cApp::OnInit()
{
    //make pointer to new object of a type cFrames and the (title)argument
    cFrames *pFrameMain = new cFrames("MAIN-WINDOW-TITLE");

    //access the member function of frame-object via pointer; same as (*p).mfunc()
    pFrameMain->Show(true);

    return true;
}
