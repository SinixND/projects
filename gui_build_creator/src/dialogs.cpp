#include "dialogs.h"

#include <string>
#include <iostream>

cDialogMain::cDialogMain(const wxString &rTitle, cPlayer *pPlayer) : wxDialog(nullptr, wxID_ANY, rTitle, wxDefaultPosition, wxDefaultSize){
    // panels
    pPanelDMain = new wxPanel(this);

    pPanelDMContents = new wxPanel(pPanelDMain);
        pPanelDMContents->SetBackgroundColour(wxColor(200, 100, 100));

    pPanelDMButtons = new wxPanel(pPanelDMain);
        pPanelDMButtons->SetBackgroundColour(wxColor(100, 200, 100));

    pPanelDMCSelect = new wxPanel(pPanelDMContents);
        pPanelDMCSelect->SetBackgroundColour(wxColor(100, 100, 200));

    pPanelDMCFilter = new wxPanel(pPanelDMContents);
        pPanelDMCFilter->SetBackgroundColour(wxColor(200, 200, 100));

    // buttons
    pButtonPDMBOk = new wxButton(pPanelDMButtons, wxID_OK, wxT("Ok"));
    
    // combo
    //std::vector<std::string> list;
    //list.push_back("first");
    wxArrayString list;
    list.Add("first");
    list.Add("second");
    double temp=2.0;
    //pPlayer->setmStability(temp);
    //EVT_COMBOBOX(id, func):
    //Process a wxEVT_COMBOBOX event, when an item on the list is selected. Note that calling GetValue() returns the new value of selection. 
    pComboBoxPDMCSelect = new wxComboBox(pPanelDMCSelect, wxID_ANY, wxT("COMBO"), wxDefaultPosition, wxDefaultSize, list, wxCB_READONLY | wxCB_SORT);
    

    // sizers
    pSizerPDMain = new wxBoxSizer(wxVERTICAL);
        pPanelDMain->SetSizerAndFit(pSizerPDMain);
        pSizerPDMain->Add(pPanelDMContents, wxSizerFlags(1).Expand().Border(wxALL, 5));
        pSizerPDMain->Add(pPanelDMButtons, wxSizerFlags(0).Expand().Border(wxALL, 5));  

    pSizerPDMButtons = new wxBoxSizer(wxHORIZONTAL);
        pPanelDMButtons->SetSizer(pSizerPDMButtons);
        pSizerPDMButtons->AddStretchSpacer(1);
        pSizerPDMButtons->Add(pButtonPDMBOk, wxSizerFlags(0).Expand().Border(wxALL, 5));
    
    pSizerPDMContents = new wxBoxSizer(wxHORIZONTAL);
        pPanelDMContents->SetSizer(pSizerPDMContents);
        pSizerPDMContents->Add(pPanelDMCSelect, wxSizerFlags(1).Expand().Border(wxALL, 5));
        pSizerPDMContents->Add(pPanelDMCFilter, wxSizerFlags(1).Expand().Border(wxALL, 5));

    //pSizerPDMCSelect = new wxBoxSizer(wxVERTICAL);
        //pPanelDMCSelect->SetSizer(pSizerPDMCSelect);
        //pSizerPDMCSelect->AddStretchSpacer(1);

    // event handlers
    Bind(wxEVT_COMMAND_BUTTON_CLICKED, [=](wxCommandEvent&){
        this->Close(true);
    }, wxID_CANCEL);
};