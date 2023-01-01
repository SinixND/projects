#ifndef _FRAMES_H_
#define _FRAMES_H_

#include <wx/wxprec.h>

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#endif //WX_PRECOMP

#include "dialogs.h"

class FrameMain : public wxFrame{
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

	// sizers
	wxSizer *pSizerPFMain;
	wxSizer *pSizerPFMContents;
	wxSizer *pSizerPFMButtons;
	wxSizer *pSizerPFMCItems;
	wxSizer *pSizerPFMCISpecialisation;

	// functions
	void OnMenuTest(wxCommandEvent &event);

public:
	// constructor
	FrameMain(const wxString &rTitle);
};

// IDs
enum{
	ID_BUTTON_PFMCI_SPECIALISATION,
	ID_BUTTON_CLEAR,
	ID_MENU_TEST
};

#endif //_FRAMES_H_