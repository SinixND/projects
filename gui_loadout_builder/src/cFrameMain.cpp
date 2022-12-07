#include "cFrameMain.h"

//define constructor
cFrameMain::cFrameMain(const wxString &rTitle) : wxFrame(NULL, wxID_ANY, rTitle, wxDefaultPosition, wxSize(250, 150)){
    wxString cwd_Path  =  wxGetCwd();
    SetIcon(wxIcon(cwd_Path + "/data/graphics/LoadoutBuilder.xpm"));
    Center();
};

//destructor
cFrameMain::~cFrameMain(){
};

