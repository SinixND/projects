// ===============================================
// ===============================================
//
// Name:      application.cpp
//
// Puporse:   First (single file) gui app
//
// Author:    Andreas S.
//
// Created:   2022-12-20
//
// Copyright: (c) 2022, Andreas S.
//
// License:   No license
//
// ===============================================
// ===============================================

// ===============================================
// Include Guard
// ===============================================
#ifndef _X_
#define _X_

#endif //_X_

// ===============================================
// Includes
// ===============================================

#include <wx/wxprec.h>

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#endif //WX_PRECOMP


// ===============================================
// frames.h - Declaration 
// ===============================================
/** Insert include guard & (library) includes **/

// declare main frame class
class FrameMain : public wxFrame{
public:
	// constructor
	FrameMain(const wxString &rTitle);

	wxMenuBar *pm_menuBar;
	wxMenu *pm_menuFile;
	wxMenu *pm_menuHelp;

private:
	// event handlers
	void OnMyTest(wxCommandEvent &event);
};

enum{
	ID_MENU_TEST = wxID_HIGHEST,
	ID_MENU_NEW = wxID_HIGHEST,
	ID_MENU_OPEN = wxID_HIGHEST,
	ID_MENU_SAVE = wxID_HIGHEST,
	ID_MENU_SAVE_AS = wxID_HIGHEST
};


// ===============================================
// frames.cpp - Implementation 
// ===============================================
/** Insert (header) includes **/

// constructor of main frame
FrameMain::FrameMain(const wxString &rTitle) : wxFrame(NULL, wxID_ANY, rTitle, wxDefaultPosition, wxSize(640, 320)){
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
    pm_menuFile->Append(ID_MENU_TEST, wxT("&Test"), wxT("Test menu"));
    pm_menuFile->Append(ID_MENU_NEW, wxT("&New"), wxT("Clear loadout"));
    pm_menuFile->Append(ID_MENU_OPEN, wxT("&Open"), wxT("Open a saved loadout"));
    pm_menuFile->Append(ID_MENU_SAVE, wxT("Save"), wxT("Save current loadout"));
    pm_menuFile->Append(ID_MENU_SAVE_AS, wxT("&Save As"), wxT("Save a new loadout"));
    pm_menuFile->AppendSeparator();
    pm_menuFile->Append(wxID_EXIT, wxT("E&xit"), wxT("Exit the program")); //no label necessary
    pm_menuHelp->Append(wxID_ABOUT, wxT("&About"), wxT("Show the About Information")); //no label necessary

    // append the menus to the menu bar
    pm_menuBar->Append(pm_menuFile, "&File");
    pm_menuBar->Append(pm_menuHelp, "&Help");

    // attach menu bar to the frame
    SetMenuBar(pm_menuBar);

    // create a status bar with 1 field
    CreateStatusBar(1);
	// set first fields default
    SetStatusText("Additional information displayed here");

    // event handlers (for the main frame)
    Bind(wxEVT_MENU, [=](wxCommandEvent&){ 
        Close(true); 
    }, wxID_EXIT);

    Bind(wxEVT_MENU, [=](wxCommandEvent&){ 
        wxMessageBox("Content", "Frame title", wxOK | wxICON_INFORMATION);
    }, wxID_ABOUT);

    Bind(wxEVT_MENU, &FrameMain::OnMyTest, this, ID_MENU_TEST);
};

void FrameMain::OnMyTest(wxCommandEvent &event){
    wxLogMessage("Dialog Content");
}


// ===============================================
// app.h - Declaration
// ===============================================
/** Insert include guard & (library) includes **/

// declare the application class
class App : public wxApp{
public:
	// called on application startup
	virtual bool OnInit();
};


// ===============================================
// app.cpp - Implementation 
// ===============================================
/** Insert (header) includes **/

// create instance of application 
wxIMPLEMENT_APP(App);

bool App::OnInit(){
    // create main application window
    FrameMain *pm_FrameMain = new FrameMain("MAIN-WINDOW-TITLE");

    // show it
    pm_FrameMain->Show(true);

    // start the event loop
    return true;
}
