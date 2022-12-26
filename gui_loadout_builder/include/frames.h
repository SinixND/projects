#ifndef _FRAMES_H_
#define _FRAMES_H_

#include <wx/wxprec.h>

#ifndef WX_PRECOMP
	#include <wx/wx.h>
	#include <wx/wrapsizer.h>
#endif //WX_PRECOMP

class FrameMain : public wxFrame{
public:
	// constructor
	FrameMain( const wxString &rTitle );

private:
    // menu bar
	wxMenuBar *pm_menuBar;
	wxMenu *pm_menuFile;
	wxMenu *pm_menuHelp;

    // panels
    wxPanel *pPanelMain;
    wxPanel *pPMLeft;
    wxPanel *pPMRight;

	// buttons
	wxButton *pButtonOpenDialog;

	// sizers
	wxBoxSizer *pSizerPanelMain;
	wxBoxSizer *pSizerPMLeft;

	// functions
	void OnMyTest( wxCommandEvent &event );
};

// IDs
enum{
	ID_BUTTON_OPEN_DIALOG = wxID_HIGHEST,
	ID_MENU_SAVE_AS = wxID_HIGHEST,
	ID_MENU_SAVE = wxID_HIGHEST,
	ID_MENU_OPEN = wxID_HIGHEST,
	ID_MENU_NEW = wxID_HIGHEST,
	ID_MENU_TEST = wxID_HIGHEST
};

#endif //_FRAMES_H_
