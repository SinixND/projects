#include <app.h>
#include <frames.h>

wxIMPLEMENT_APP(App);

bool App::OnInit(){
    FrameMain *pFrameMain = new FrameMain("FrameMain Title");
    pFrameMain->Show(); 

    return true;
}