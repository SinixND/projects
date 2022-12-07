#ifndef CMAINFRAME_H
#define CMAINFRAME_H

#include <wx/wxprec.h>

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#endif

//make a new frame class; must derive from wxFrame
class cMainFrame : public wxFrame(){
public:
	//declare constructor with title parameter
	cMainFrame(const wxString& title);

	//destructor
	~cMainFrame();
};

#endif
