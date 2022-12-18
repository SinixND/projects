#ifndef _CFRAMES_H_
#define _CFRAMES_H_

#include <wx/wxprec.h>

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#endif

class cFrameMain : public wxFrame
{
public:
	cFrameMain(const wxString &rTitle);

private:
	wxDECLARE_EVENT_TABLE();

	wxMenuBar *pm_menuBar;
	wxMenu *pm_menuTabFile;
	wxMenu *pm_menuTabHelp;

	void OnHelloClicked(wxCommandEvent &event);
    void OnExitClicked(wxCommandEvent &event);
    void OnAboutClicked(wxCommandEvent &event);
};

enum
{
	ID_Hello = 1
};

//define Event Table
BEGIN_EVENT_TABLE(cFrameMain, wxFrame)
    EVT_MENU(ID_Hello, cFrameMain::OnHelloClicked)
    EVT_MENU(wxID_EXIT, cFrameMain::OnExitClicked)
    EVT_MENU(wxID_ABOUT, cFrameMain::OnAboutClicked)
END_EVENT_TABLE()

#endif
