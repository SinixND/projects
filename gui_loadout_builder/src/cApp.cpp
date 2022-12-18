#include "cApp.h"
#include "cFrames.h"

wxIMPLEMENT_APP(cApp);

bool cApp::OnInit()
{
    cFrameMain *pm_FrameMain = new cFrameMain("MAIN-WINDOW-TITLE");
    pm_FrameMain->Show(true);

    return true;
}
