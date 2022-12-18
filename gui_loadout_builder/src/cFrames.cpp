#include "cFrames.h"

//define constructor
cFrameMain::cFrameMain(const wxString &rTitle) : wxFrame(NULL, wxID_ANY, rTitle, wxDefaultPosition, wxSize(640, 320))
{
    //define an icon
    wxString cwd_Path  =  wxGetCwd();
    SetIcon(wxIcon(wxGetCwd() + "/data/graphics/LoadoutBuilder.ico"));
    Center();

    //setup menu bar
    pm_menuBar = new wxMenuBar;
    pm_menuTabFile = new wxMenu;
    pm_menuTabFile->Append(ID_Hello, wxT("&Hello"));
    pm_menuTabFile->AppendSeparator();
    pm_menuTabFile->Append(wxID_EXIT, wxT("&Quit")); //no label necessary
    pm_menuBar->Append(pm_menuTabFile, "&File");
 
    pm_menuTabHelp = new wxMenu;
    pm_menuTabHelp->Append(wxID_ABOUT, wxT("&About")); //no label necessary
    pm_menuBar->Append(pm_menuTabHelp, "&Help");

    SetMenuBar(pm_menuBar);
};

void cFrameMain::OnExitClicked(wxCommandEvent &WXUNUSED(event))
{
    Close(true);
}

void cFrameMain::OnAboutClicked(wxCommandEvent &event)
{
    wxMessageBox("Content", "Frame title", wxOK | wxICON_INFORMATION);
}

void cFrameMain::OnHelloClicked(wxCommandEvent &event)
{
    wxLogMessage("Dialog Content");
}
