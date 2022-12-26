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
    wxPanel *pPDMUpper;
    wxPanel *pPDMButtons;

    // buttons
    wxButton *pButtonApply;
    //wxButton *pButtonCancel;

    // sizers
    wxBoxSizer *pSizerPanelDialogMain;
    wxBoxSizer *pSizerPDMButtons;
};

#endif //_DIALOGS_H_