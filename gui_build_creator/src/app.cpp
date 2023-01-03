#include "app.h"

#include "frames.h"

wxIMPLEMENT_APP(cApp);

bool cApp::OnInit(){
    cFrameMain *pFrameMain = new cFrameMain("FrameMain Title");
    pFrameMain->Show(); 

    return true;
}