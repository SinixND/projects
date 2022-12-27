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
	// dialogs
	DialogMain *pDialogMain;

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
	ID_BUTTON_OPEN_DIALOGMAIN = wxID_HIGHEST,
	ID_BUTTON_CLEAR = wxID_HIGHEST,
	ID_MENU_TEST = wxID_HIGHEST
};

#endif //_FRAMES_H_