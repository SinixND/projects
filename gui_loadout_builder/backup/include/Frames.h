#ifndef _FRAMES_H_
#define _FRAMES_H_

#include <wx/wxprec.h>

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#endif //WX_PRECOMP

// declare main frame class
class FrameMain : public wxFrame
{
public:
	// constructor
	FrameMain(const wxString &rTitle);

	wxMenuBar *pm_menuBar;
	wxMenu *pm_menuFile;
	wxMenu *pm_menuHelp;

	// event handlers
	void OnMyEvent(wxCommandEvent &event);
    void OnQuit(wxCommandEvent &event);
    void OnAbout(wxCommandEvent &event);
/*
private:
	// this class handles events
	wxDECLARE_EVENT_TABLE();
*/
};

enum
{
	ID_MENU_NEW = wxID_HIGHEST
	ID_MENU_OPEN = wxID_HIGHEST
	ID_MENU_SAVE = wxID_HIGHEST
	ID_MENU_SAVE_AS = wxID_HIGHEST
};

#endif //_FRAMES_H_
