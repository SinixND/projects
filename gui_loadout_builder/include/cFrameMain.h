#ifndef cframemain_h
#define cframemain_h

#include <wx/wxprec.h>

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#endif

//make a new frame class; must derive from wxFrame
class cFrameMain : public wxFrame(){
public:
	//declare constructor with title parameter
	cFrameMain(const wxString &rTitle);

	//destructor
	~cFrameMain();
};

#endif
