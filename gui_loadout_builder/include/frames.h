#ifndef _FRAMES_H_
#define _FRAMES_H_

#include <wx/wxprec.h>

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#endif //WX_PRECOMP

#include "dialogs.h"

class FrameMain : public wxFrame{
public:
	// constructor
	FrameMain(const wxString &rTitle);

private:
    // menu bar
	wxMenuBar *pm_menuBar;
	wxMenu *pm_menuFile;
	wxMenu *pm_menuHelp;

    // panels
    wxPanel *pPanelFMain;
	wxPanel *pPanelFMButtons;
	wxPanel *pPanelFMContents;
    wxPanel *pPanelFMCItems;
    wxPanel *pPanelFMCStats;

	// buttons
	wxButton *pButtonClear;
    wxButton *pButtonExit;
	wxButton *pButtonOpenDialogMain;

	// sizers
	wxSizer *pSizerPFMain;
	wxSizer *pSizerPFMButtons;
	wxSizer *pSizerPFMContents;
	wxSizer *pSizerPFMCItems;

	// functions
	void OnMenuTest(wxCommandEvent &event);
};

// IDs
enum{
	ID_BUTTON_OPEN_DIALOGMAIN,
	ID_BUTTON_CLEAR,
	ID_MENU_TEST
};

#endif //_FRAMES_H_