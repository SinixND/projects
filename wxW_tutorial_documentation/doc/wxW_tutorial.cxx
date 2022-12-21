//////// =============================================================
//////// =============================================================
//////// Tutorial on how to make a wxWidgets-GUI application
//////// Code is split in declaration (.h) and implementation (.cpp)
//////// with generic file names (MyXX) to avoid confusion with class 
//////// names. No file separation needed. From my expirience 
//////// application declaration and implementation have to be at the
//////// end for single file GUIs.
//////// I used the following naming conventions:
i/////// - Member Attributes: mClassMemberAttribute
//////// - Pointers: pPointerVar
//////// - Reference: rReferenceVar
//////// - Constants: CONST_VAR
//////// =============================================================
//////// =============================================================

////// ===============================================================
////// Minimal required
////// ===============================================================

//// DECLARATION MyApp.h
#include <wx/wxprec.h>

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#endif //WX_PRECOMP

class App : public wxApp{
public:
	virtual bool OnInit();
};

//// IMPLEMENTATION MyApp.cpp
wxIMPLEMENT_APP(App);

bool App::OnInit(){
    return true;
}

////// ===============================================================
////// Add a frame
////// ===============================================================

//// DECLARATION MyFrame.h
class MyFrame : public wxFrame{
public:
	MyFrame(const wxString &rTitle);
};

//// IMPLEMENTATION MyFrame.cpp
MyFrame::MyFrame(const wxString &rTitle) 
    : wxFrame(NULL, wxID_ANY, rTitle, wxDefaultPosition, wxSize(640, 320)){
};

//// ADD TO OnInit() in MyApp.cpp
MyFrame *pm_MyFrame = new MyFrame("MAIN-WINDOW-TITLE");
pm_MyFrame->Show(true);