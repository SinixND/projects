#include <dialogs.h>

DialogMain::DialogMain(const wxString &rTitle) : wxDialog(nullptr, wxID_ANY, rTitle, wxDefaultPosition, wxDefaultSize){
    // panels
    pPanelDMain = new wxPanel(this);

    pPanelDMContents = new wxPanel(pPanelDMain);
        pPanelDMContents->SetBackgroundColour(wxColor(200, 100, 100));

    pPanelDMButtons = new wxPanel(pPanelDMain);
        pPanelDMButtons->SetBackgroundColour(wxColor(100, 200, 100));

    // buttons
	pButtonCancel = new wxButton(pPanelDMButtons, wxID_CANCEL, wxT("Cancel"));

    // sizers
    pSizerPDMain = new wxBoxSizer(wxVERTICAL);
        pPanelDMain->SetSizerAndFit(pSizerPDMain);
        pSizerPDMain->Add(pPanelDMContents, wxSizerFlags(1).Expand().Border(wxALL, 5));
        pSizerPDMain->Add(pPanelDMButtons, wxSizerFlags(0).Expand().Border(wxALL, 5));  

    pSizerPDMButtons = new wxBoxSizer(wxHORIZONTAL);
        pPanelDMButtons->SetSizer(pSizerPDMButtons);
        pSizerPDMButtons->AddStretchSpacer(1);
        pSizerPDMButtons->Add(pButtonCancel, wxSizerFlags(0).Expand().Border(wxALL, 5));
    
    // event handlers
    Bind(wxEVT_COMMAND_BUTTON_CLICKED, [=](wxCommandEvent&){
        this->Destroy();
    }, wxID_CANCEL);
};