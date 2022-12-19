#include "cFrames.h"

// constructor of main frame
cFrameMain::cFrameMain(const wxString &rTitle) : wxFrame(NULL, wxID_ANY, rTitle, wxDefaultPosition, wxSize(640, 320))
{
    // set the frames icon
    wxString cwd_Path  =  wxGetCwd();
    SetIcon(wxIcon(wxGetCwd() + "/data/graphics/LoadoutBuilder.xpm"));
    Center();

    // create a menu bar
    pm_menuBar = new wxMenuBar;
    
    // create a menus
    pm_menuFile = new wxMenu;
    pm_menuHelp = new wxMenu;

    // append entries to the menus
    pm_menuFile->Append(ID_Hello, wxT("&New/tStrg-N"), wxT("Clear loadout"));
    pm_menuFile->Append(ID_Hello, wxT("&Open/tStrg-O"), wxT("Open a saved loadout"));
    pm_menuFile->Append(ID_Hello, wxT("Save/tStrg-S", wxT("Save current loadout")));
    pm_menuFile->Append(ID_Hello, wxT("&Save As/tStrg-Shift-S"), wxT("Save a new loadout"));
    pm_menuFile->AppendSeparator();
    pm_menuFile->Append(wxID_EXIT, wxT("E&xit/tStrg-Q"), wxT("Exit the program")); //no label necessary
    pm_menuHelp->Append(wxID_ABOUT, wxT("&About..."), wxT("Show the About Information")); //no label necessary

    // append the menus to the menu bar
    pm_menuBar->Append(pm_menuFile, "&File");
    pm_menuBar->Append(pm_menuHelp, "&Help");

    // attach menu bar to the frame
    SetMenuBar(pm_menuBar);

    // create a status bar with 2 fields
    CreateStatusBar(2);
	// set first fields default
    SetStatusText("Additional information displayed here");
};

void cFrameMain::OnQuit(wxCommandEvent &WXUNUSED(event))
{
    Close(true);
}

void cFrameMain::OnAbout(wxCommandEvent &event)
{
    wxMessageBox("Content", "Frame title", wxOK | wxICON_INFORMATION);
}

void cFrameMain::OnHello(wxCommandEvent &event)
{
    wxLogMessage("Dialog Content");
}

// event table for the main frame
BEGIN_EVENT_TABLE(cFrameMain, wxFrame)
    EVT_MENU(ID_Hello, cFrameMain::OnHello)
    EVT_MENU(wxID_EXIT, cFrameMain::OnQuit)
    EVT_MENU(wxID_ABOUT, cFrameMain::OnAbout)
END_EVENT_TABLE()
