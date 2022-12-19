#ifndef _CFRAMES_H_
#define _CFRAMES_H_

#include <wx/wxprec.h>

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#endif

// declare main frame class
class cFrameMain : public wxFrame
{
public:
	// constructor
	cFrameMain(const wxString &rTitle);

	wxMenuBar *pm_menuBar;
	wxMenu *pm_menuFile;
	wxMenu *pm_menuHelp;

	// event handlers
	void OnHello(wxCommandEvent &event);
    void OnQuit(wxCommandEvent &event);
    void OnAbout(wxCommandEvent &event);

private:
	// this class handles events
	wxDECLARE_EVENT_TABLE();
};

enum
{
	ID_Hello = 1
};

#endif
