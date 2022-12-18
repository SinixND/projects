#ifndef _CAPP_H_
#define _CAPP_H_

#include <wx/wxprec.h>

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#endif

class cApp : public wxApp
{
public:
	virtual bool OnInit();
};

#endif
