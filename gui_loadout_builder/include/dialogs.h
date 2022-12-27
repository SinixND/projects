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
    wxPanel *pPanelDMButtons;
    wxPanel *pPanelDMContents;

    // buttons
    wxButton *pButtonOk;
    wxButton *pButtonCancel;

    // sizers
    wxSizer *pSizerPDMain;
    wxSizer *pSizerPDMButtons;
};

#endif //_DIALOGS_H_