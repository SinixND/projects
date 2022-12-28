#include "frames.h"

FrameMain::FrameMain(const wxString &rTitle) : wxFrame(NULL, wxID_ANY, rTitle, wxDefaultPosition, wxSize(640, 320)){
    // menu bar
    pm_menuBar = new wxMenuBar;
    
    // menus
    pm_menuFile = new wxMenu;
    pm_menuHelp = new wxMenu;

    // menu entries
    pm_menuFile->Append(ID_MENU_TEST, wxT("&Test"), wxT("Test menu"));
    pm_menuFile->AppendSeparator();
    pm_menuFile->Append(wxID_EXIT, wxT("E&xit"), wxT("Exit the program")); //no label necessary

    pm_menuHelp->Append(wxID_ABOUT, wxT("&About"), wxT("Show the About Information")); //no label necessary

    // append menus
    pm_menuBar->Append(pm_menuFile, "&File");
    pm_menuBar->Append(pm_menuHelp, "&Help");

    SetMenuBar(pm_menuBar);

    // status bar
    CreateStatusBar(1);
        SetStatusText("Additional information displayed here");

    // panels
    pPanelFMain = new wxPanel(this);

    pPanelFMContents = new wxPanel(pPanelFMain);
        pPanelFMContents->SetBackgroundColour(wxColor(200, 100, 100));

    pPanelFMButtons = new wxPanel(pPanelFMain);
        pPanelFMButtons->SetBackgroundColour(wxColor(100, 200, 100));

    pPanelFMCItems = new wxPanel(pPanelFMContents);
        pPanelFMCItems->SetBackgroundColour(wxColor(100, 100, 200));

    pPanelFMCStats = new wxPanel(pPanelFMContents);
        pPanelFMCStats->SetBackgroundColour(wxColor(200, 200, 100));

    // buttons
	pButtonExit = new wxButton(pPanelFMButtons, wxID_EXIT, wxT("Exit"));
	pButtonClear = new wxButton(pPanelFMButtons, ID_BUTTON_CLEAR, wxT("Clear"));
    pButtonOpenDialogMain = new wxButton(pPanelFMCItems, ID_BUTTON_OPEN_DIALOGMAIN, wxT("Open dialog main"));

    // sizers
    pSizerPFMain = new wxBoxSizer(wxVERTICAL);
        pPanelFMain->SetSizer(pSizerPFMain);
        pSizerPFMain->Add(pPanelFMContents, wxSizerFlags(1).Expand().Border(wxALL, 5));
        pSizerPFMain->Add(pPanelFMButtons, wxSizerFlags(0).Expand().Border(wxALL, 5));

    pSizerPFMButtons = new wxBoxSizer(wxHORIZONTAL);
        pPanelFMButtons->SetSizer(pSizerPFMButtons);
        pSizerPFMButtons->AddStretchSpacer(1);
        pSizerPFMButtons->Add(pButtonClear, wxSizerFlags(0).Border(wxALL, 5));
        pSizerPFMButtons->Add(pButtonExit, wxSizerFlags(0).Border(wxALL, 5));
        
    pSizerPFMContents = new wxBoxSizer(wxHORIZONTAL);
        pPanelFMContents->SetSizer(pSizerPFMContents);
        pSizerPFMContents->Add(pPanelFMCItems, wxSizerFlags(1).Expand().Border(wxALL, 5));
        pSizerPFMContents->Add(pPanelFMCStats, wxSizerFlags(1).Expand().Border(wxALL, 5));

    pSizerPFMCItems = new wxBoxSizer(wxHORIZONTAL);
        pPanelFMCItems->SetSizer(pSizerPFMCItems);
        pSizerPFMCItems->AddStretchSpacer(1);
        pSizerPFMCItems->Add(pButtonOpenDialogMain, wxSizerFlags(0).CenterVertical().Border(wxALL, 5));
        pSizerPFMCItems->AddStretchSpacer(1);


    // event handlers
    Bind(wxEVT_MENU, [=](wxCommandEvent&){ 
        this->Close(true); 
    }, wxID_EXIT);

    Bind(wxEVT_MENU, [=](wxCommandEvent&){ 
        wxMessageBox("Content", "Frame title", wxOK | wxICON_INFORMATION);
    }, wxID_ABOUT);

    Bind(wxEVT_MENU, &FrameMain::OnMenuTest, this, ID_MENU_TEST); 

    Bind(wxEVT_COMMAND_BUTTON_CLICKED, [=](wxCommandEvent&){
        this->Close(true);
    }, wxID_EXIT);

    Bind(wxEVT_COMMAND_BUTTON_CLICKED, [=](wxCommandEvent&){  }, ID_BUTTON_CLEAR);

    Bind(wxEVT_COMMAND_BUTTON_CLICKED, [=](wxCommandEvent&){
        DialogMain DialogMain("DialogMain Title");
        DialogMain.ShowModal();
    }, ID_BUTTON_OPEN_DIALOGMAIN);
};

// functions
void FrameMain::OnMenuTest(wxCommandEvent &event){
    wxLogMessage("Dialog Content");
}
