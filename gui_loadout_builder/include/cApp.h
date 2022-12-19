#ifndef _CAPP_H_
#define _CAPP_H_

#include <wx/wxprec.h>

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#endif

// declare the application class
class cApp : public wxApp
{
public:
	// called on application startup
	virtual bool OnInit();
};

#endif
