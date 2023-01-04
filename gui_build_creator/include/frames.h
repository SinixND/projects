#ifndef _FRAMES_H_
#define _FRAMES_H_

#include <wx/wxprec.h>

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#endif //WX_PRECOMP

#include "player.h"
#include <wx/vscroll.h>

class cFrameMain : public wxFrame{
public:
	// constructor
	cFrameMain(const wxString &rTitle, cPlayer *pPlayer);

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
    wxScrolledWindow *pPanelFMCStats;
	wxPanel *pPanelFMCISpecialisation;

	// buttons
    wxButton *pButtonPFMBExit;
	wxButton *pButtonPFMBClear;
	wxButton *pButtonPFMCISpecialisation;

	// static texts
	wxStaticText *pStaticTextPFMCSStability;
	
	// text ctrls
	wxTextCtrl *pTextCtrlPFMCSStabilityValue;

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
	ID_TEXTCTRL_PFMCSS_STABILITYVALUE,
	ID_BUTTON_PFMCI_SPECIALISATION,
	ID_BUTTON_CLEAR,
	ID_MENU_TEST
};

#endif //_FRAMES_H_