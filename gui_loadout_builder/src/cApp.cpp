#include "cApp.h"
#include "cFrame.h"

//equivalent to cpp's main function
wxIMPLEMENT_APP(cApp);

//define application's initialisation
bool cApp::OnInit(){
    //make pointer to new object of type cFrame and the (title)argument
    cFrame *ptr_oFrame = new cFrame("FRAME-TITLE");
    //access the member function of oFrame via pointer; same as (*ptr).mfunc()
    ptr_oFrame->Show(true);

    return true;
}
