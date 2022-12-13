#ifndef _CPANELS_H_
#define _CPANELS_H_

#include <wx/wxprec.h>

#ifndef WX_PRECOMP
	#include <wx/wx.h>
    #include <wx/panel.h>
#endif

//make a new panel class; must derive from wxPanel
class cLeftPanel : public wxPanel
{
public:
    //constructor
    cLeftPanel(wxPanel *pParent);

    //member-attributes
    wxButton *pm_buttonPlus;
    wxButton *pm_buttonMinus;
    wxPanel *pm_parent;
    int count;

    //member-functions
    void OnPlus(wxCommandEvent &rEvent);
    void OnMinux(wxCommandEvent &rEvent);
};

class cRightPanel : public wxPanel
{
public:
    cRightPanel(wxPanel *pParent);

    wxStaticText *pm_text;
};

const int kID_PLUS = 101;
const int kID_MINUS = 102;

#endif
