#ifndef CAPP_H
#define CAPP_H

#include <wx/wxprec.h>

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#endif

//make a new application class; must derive from wxApp
class cApp : public wxApp{
public:
	//declare app's initialisation which runs the class and keeps active when true
	virtual bool OnInit();
};

#endif
