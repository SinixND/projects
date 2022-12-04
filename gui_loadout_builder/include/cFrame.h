#ifndef CFRAME_H
#define CFRAME_H

#include <wx/wxprec.h>

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#endif

//make a new frame class; must derive from wxFrame
class cFrame : public wxFrame{
public:
	//declare constructor with title parameter
	cFrame(const wxString& title);

	//declare destructor
	~cFrame();
};

#endif
