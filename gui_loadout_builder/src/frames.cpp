#include "frames.h"

FrameMain::FrameMain(const wxString &rTitle) : wxFrame(NULL, wxID_ANY, rTitle, wxDefaultPosition, wxSize(640, 320)){
    // set the frames icon
    wxString cwd_Path  =  wxGetCwd();
    SetIcon(wxIcon(wxGetCwd() + "/data/graphics/LoadoutBuilder.xpm"));
    Center();

    // menu bar
    pm_menuBar = new wxMenuBar;
    
    //menus
    pm_menuFile = new wxMenu;
    pm_menuHelp = new wxMenu;

    // menu entries
    pm_menuFile->Append(ID_MENU_TEST, wxT("&Test"), wxT("Test menu"));
    pm_menuFile->Append(ID_MENU_NEW, wxT("&New"), wxT("Clear loadout"));
    pm_menuFile->Append(ID_MENU_OPEN, wxT("&Open"), wxT("Open a saved loadout"));
    pm_menuFile->Append(ID_MENU_SAVE, wxT("Save"), wxT("Save current loadout"));
    pm_menuFile->Append(ID_MENU_SAVE_AS, wxT("&Save As"), wxT("Save a new loadout"));
    pm_menuFile->AppendSeparator();
    pm_menuFile->Append(wxID_EXIT, wxT("E&xit"), wxT("Exit the program")); //no label necessary
    pm_menuHelp->Append(wxID_ABOUT, wxT("&About"), wxT("Show the About Information")); //no label necessary

    pm_menuBar->Append(pm_menuFile, "&File");
    pm_menuBar->Append(pm_menuHelp, "&Help");

    SetMenuBar(pm_menuBar);

    // status bar
    CreateStatusBar(1);
    SetStatusText("Additional information displayed here");

    // panels
    pPanelFirst = new wxPanel(this, ID_ANY);

    // event handlers
    Bind(wxEVT_MENU, [=](wxCommandEvent&){ 
        Close(true); 
    }, wxID_EXIT);

    Bind(wxEVT_MENU, [=](wxCommandEvent&){ 
        wxMessageBox("Content", "Frame title", wxOK | wxICON_INFORMATION);
    }, wxID_ABOUT);

    Bind(wxEVT_MENU, &FrameMain::OnMyTest, this, ID_MENU_TEST); 

};

// event functions
void FrameMain::OnMyTest(wxCommandEvent &event){
    wxLogMessage("Dialog Content");
}

