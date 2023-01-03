#ifndef _FRAMES_H_
#define _FRAMES_H_

#include <wx/wxprec.h>

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#endif //WX_PRECOMP

#include "dialogs.h"

class cFrameMain : public wxFrame{
public:
	// constructor
	cFrameMain(const wxString &rTitle);

private:
    // menu bar
	wxMenuBar *pm_menuBar;
	wxMenu *pm_menuFile;
	wxMenu *pm_menuHelp;

    // panels
    wxPanel *pPanelFMain;
	wxPanel *pPanelFMContents;
	wxPanel *pPanelFMButtons;
    wxPanel *pPanelFMCItems;
    wxPanel *pPanelFMCStats;
	wxPanel *pPanelFMCISpecialisation;

	// buttons
    wxButton *pButtonPFMBExit;
	wxButton *pButtonPFMBClear;
	wxButton *pButtonPFMCISpecialisation;

	// text ctrls
	wxStaticText *pStaticTextPFMCSStability;

	// sizers
	wxSizer *pSizerPFMain;
	wxSizer *pSizerPFMContents;
	wxSizer *pSizerPFMButtons;
	wxSizer *pSizerPFMCItems;
	wxSizer *pSizerPFMCStats;
	wxSizer *pSizerPFMCISpecialisation;

	// functions
	void OnMenuTest(wxCommandEvent &event);
};

// IDs
enum{
	ID_STATICTEXT_PFMCSS_STABILITY,
	ID_BUTTON_PFMCI_SPECIALISATION,
	ID_BUTTON_CLEAR,
	ID_MENU_TEST
};

#endif //_FRAMES_H_