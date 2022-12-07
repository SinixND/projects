#include "cFrameMain.h"

//define constructor
cFrameMain::cFrameMain(const wxString &r_title) : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(250, 150)){    
    wxString cwdPath  =  wxGetCwd();
    SetIcon(wxIcon(cwdPath + "/data/graphics/LoadoutBuilder.xpm"));
    Center();
};

//destructor
cFrameMain::~cFrameMain(){
};

