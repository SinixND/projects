#include "App.h"
#include "Frames.h"

// create instance of application 
wxIMPLEMENT_APP(App);

bool App::OnInit()
{
    // create main application window
    FrameMain *pm_FrameMain = new FrameMain("MAIN-WINDOW-TITLE");

    // show it
    pm_FrameMain->Show(true);

    // start the event loop
    return true;
}
