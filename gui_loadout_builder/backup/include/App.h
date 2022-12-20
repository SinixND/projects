#ifndef _APP_H_
#define _APP_H_

#include <wx/wxprec.h>

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#endif //WX_PRECOMP

// declare the application class
class App : public wxApp
{
public:
	// called on application startup
	virtual bool OnInit();
};

#endif
