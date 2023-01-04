#include "app.h"
#include "frames.h"
#include "player.h"
//#include <memory>

wxIMPLEMENT_APP(cApp);

bool cApp::OnInit(){
    //std::unique_ptr<cPlayer> pPlayer(new cPlayer());
    cPlayer oPlayer;
    cFrameMain *pFrameMain = new cFrameMain("FrameMain Title", &oPlayer);
    pFrameMain->Show(); 

    return true;
}