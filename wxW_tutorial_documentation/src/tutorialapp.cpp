// ===================================================================
// >>>>>>>>>> DECLARATION 
// ===================================================================

// ===================================================================
// MyFrame.h
// ===================================================================
#include <wx/wxprec.h>

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#endif //WX_PRECOMP

class MyFrame : public wxFrame{
public:
	MyFrame(const wxString &rTitle);
};

// ===================================================================
// MyApp.h
// ===================================================================
class MyApp : public wxApp{
public:
	virtual bool OnInit();
};

// ===================================================================
// >>>>>>>>>> IMPLEMENTATION
// ===================================================================

// ===================================================================
// MyFrame.cpp
// ===================================================================
MyFrame::MyFrame(const wxString &rTitle) 
    : wxFrame(NULL, wxID_ANY, rTitle, wxDefaultPosition, wxSize(640, 320)){
};

// ===================================================================
// MyApp.cpp
// ===================================================================
wxIMPLEMENT_APP(MyApp);

bool MyApp::OnInit(){
	MyFrame *pm_MyFrame = new MyFrame("MAIN-WINDOW-TITLE");
	pm_MyFrame->Show(true);
    return true;
}
