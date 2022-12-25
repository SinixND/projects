#ifndef _FRAMES_H_
#define _FRAMES_H_

#include <wx/wxprec.h>

#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif //WX_PRECOMP

class FrameMain : public wxFrame{
public:
	// constructor
	FrameMain(const wxString &rTitle);

    // menu bar
	wxMenuBar *pm_menuBar;
	wxMenu *pm_menuFile;
	wxMenu *pm_menuHelp;

    // panels
    wxPanel *pPanelFirst;

private:
	// event functions
	void OnMyTest(wxCommandEvent &event);
};

enum{
	ID_MENU_TEST = wxID_HIGHEST,
	ID_MENU_NEW = wxID_HIGHEST,
	ID_MENU_OPEN = wxID_HIGHEST,
	ID_MENU_SAVE = wxID_HIGHEST,
	ID_MENU_SAVE_AS = wxID_HIGHEST
};

#endif //_FRAMES_H_
