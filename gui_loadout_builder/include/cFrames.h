#ifndef _CFRAMES_H_
#define _CFRAMES_H_

#include <wx/wx.h>

//make a new frame class; must derive from wxFrame
class cFrameMain : public wxFrame
{
public:
	//declare constructor with title parameter
	cFrameMain(const wxString &rTitle);

private:
	wxMenuBar *pm_menuBar;
	wxMenu *pm_menuFile;
	wxMenu *pm_menuHelp;

    //wxPanel *pm_panelItems;
	//wxButton *pm_buttonChoose;

    void OnExitClicked(wxCommandEvent &rEvent);
    void OnAboutClicked(wxCommandEvent &rEvent);

	//destructor
	~cFrameMain();
};

#endif
