#include "cApp.h"
#include "cFrames.h"

// create instance of application 
wxIMPLEMENT_APP(cApp);

bool cApp::OnInit()
{
    // create main application window
    cFrameMain *pm_FrameMain = new cFrameMain("MAIN-WINDOW-TITLE");

    // show it
    pm_FrameMain->Show(true);

    // start the event loop
    return true;
}
