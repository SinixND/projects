#include "cFrames.h"

//define constructor
cFrameMain::cFrameMain(const wxString &rTitle) : wxFrame(NULL, wxID_ANY, rTitle, wxDefaultPosition, wxSize(640, 320))
{
    //define an icon
    wxString cwd_Path  =  wxGetCwd();
    SetIcon(wxIcon(cwd_Path + "/data/graphics/LoadoutBuilder.xpm"));
    Center();

    pm_menuFile = new wxMenu;
    pm_menuFile->Append(wxID_EXIT);
 
    pm_menuHelp = new wxMenu;
    pm_menuHelp->Append(wxID_ABOUT);

    pm_menuBar = new wxMenuBar;
    pm_menuBar->Append(pm_menuFile, "&File");
    pm_menuBar->Append(pm_menuHelp, "&Help");
    
    SetMenuBar(pm_menuBar);
    
    //define a connection 
    //Connect(wxID_EXIT, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(cFrameMain::OnQuit));
};

//destructor
cFrameMain::~cFrameMain()
{
};

