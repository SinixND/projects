#ifndef _DIALOGS_H_ 
#define _DIALOGS_H_ 

#include <wx/wxprec.h>

#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif //WX_PRECOMP

class DialogMain : public wxDialog{
public:
    DialogMain( const wxString &rTitle );

private:
    // panels
    wxPanel *pPanelDialogMain;
    wxPanel *pPanelDMUpper;
    wxPanel *pPanelDMButtons;

    // buttons
    wxButton *pButtonApply;
    //wxButton *pButtonCancel;

    // sizers
    wxBoxSizer *pSizerPDialogMain;
    wxBoxSizer *pSizerPDMButtons;
};

#endif //_DIALOGS_H_