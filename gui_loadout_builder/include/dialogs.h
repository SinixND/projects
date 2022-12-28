#ifndef _DIALOGS_H_ 
#define _DIALOGS_H_ 

#include <wx/wxprec.h>

#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif //WX_PRECOMP

class DialogMain : public wxDialog{
public:
    DialogMain(const wxString &rTitle);

private:
    // panels
    wxPanel *pPanelDMain;
    wxPanel *pPanelDMContents;
    wxPanel *pPanelDMButtons;
    wxPanel *pPanelDMCSelect;
    wxPanel *pPanelDMCFilter;

    // buttons
    wxButton *pButtonPDMBOk;

    // combo
    wxComboBox *pComboBoxPDMCSelect;
    // sizers
    wxSizer *pSizerPDMain;
    wxSizer *pSizerPDMButtons;
    wxSizer *pSizerPDMContents;
    wxSizer *pSizerPDMCSelect;
};

// IDs
enum{
	ID_COMBOBOX_PDMC_SELECT
};

#endif //_DIALOGS_H_