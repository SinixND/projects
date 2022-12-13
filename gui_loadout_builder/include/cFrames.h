#ifndef _CFRAMES_H_
#define _CFRAMES_H_

#include "cPanels.h"
#include <wx/wxprec.h>

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#endif

//make a new frame class; must derive from wxFrame
class cFrames : public wxFrame
{
public:
	//declare constructor with title parameter
	cFrames(const wxString &rTitle);

	cLeftPanel *pm_leftPanel;
	cRightPanel *pm_rightPanel;
	wxPanel *pm_parent;

	//declare function that gets triggered by an event
    void OnQuit(wxCommandEvent &rEventQuit);

	//destructor
	~cFrames();
};

#endif
