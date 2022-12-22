//=====================================================
//=====================================================
/* Tutorial on how to make a wxWidgets-GUI application
/* ----------------------------------------------------
/* Code is split in declaration (.h) and implementation (.cpp) with generic file names (MYwxClass) to avoid confusion with class  names. No file separation needed. From my expirience  application declaration and implementation have to be at the end for single file GUIs.
/* I used the following naming conventions:
/* - Member Attributes: mClassMemberAttribute
/* - Pointers: pPointerVar
/* - Reference: rReferenceVar
/* - Constants: CONST_VAR
//**/
//=====================================================
//=====================================================

//=====================================================
// Table of contents :toc
//=====================================================

// # Minimal required :tocminimal
//
// # Add a frame (top level) :tocframe
//
// ### Add an icon :tocicon
//
// ### Add a menu bar to frame :tocmbar
//
// ##### Add a menu :tocmenu
//
// ####### Add a menu item :tocmitem
//
// ### Add a status bar to frame :tocsbar
//
// # Add an event handler :toceventhandler
//
// ### ..with bind() and lambda :toclambdabind
//     !!! prefered; for small functions
//
// ### ..with bind() and mfunction :tocfunctionbind
//     !!! prefered; for small functions
//
// ### ..with event table :toceventtable
//     !!! outdated


//=====================================================
// # Minimal required :minimal
//=====================================================

// LOCATION: DECLARATION of MYwxApp.h 
#include <wx/wxprec.h>

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#endif //WX_PRECOMP

class MYwxApp : public wxMYwxApp{
public:
	virtual bool OnInit();
}; 

// LOCATION: IMPLEMENTATION of MYwxApp.cpp
wxIMPLEMENT_APP(MYwxApp);

bool MYwxApp::OnInit(){
    return true;
}


//=====================================================
// # Add a frame (top level) :frame
//=====================================================

// LOCATION: DECLARATION of MYwxFrame.h
class MYwxFrame : public wxFrame{
public:
	MYwxFrame(const wxString &rTitle);
};

// LOCATION: IMPLEMENTATION of MYwxFrame.cpp
MYwxFrame::MYwxFrame(const wxString &rTitle) 
		: wxFrame(NULL, wxID_ANY, rTitle, wxDefaultPosition, wxSize(640, 320)){
};

// LOCATION: IMPLEMENTATNON of MYwxApp.cpp
// ADD TO OnInit()
MYwxFrame *pm_MYwxFrame = new MYwxFrame("MAIN-FRAME-TITLE");
pm_MYwxFrame->Show(true);


//=====================================================
// ### Add an icon :icon
//=====================================================
// LOCATION: IMPLEMENTATION of MYwxFrame.cpp
// ADD TO constructor

wxString cwd_Path  =  wxGetCwd();
SetIcon(wxIcon(wxGetCwd() + "/data/graphics/LoadoutBuilder.xpm"));
Center();
	

//=====================================================
// ### Add a menu bar to frame :mbar
//=====================================================
// LOCATION: IMPLEMENTATION of MYwxFrame.cpp
// ADD TO constructor

// !!! must place after menu creation
wxMenuBar *menuBarName = new wxMenuBar;
// append menus here
SetMenuBar(menuBarName);


//=====================================================
// ##### Add a menu :menu
//=====================================================
// LOCATION: IMPLEMENTATION of MYwxFrame.cpp
// ADD TO constructor

// !!! must place before SetMenuBar()
wxMenu *menuName = new wxMenu;
// append menu items here

// append menus to menu bar
menuBarName->Append(menuName, "&Menu Name");


//=====================================================
// ####### Add a predefined menu item :predefinedmenuitem
//=====================================================
// LOCATION: IMPLEMENTATION of MYwxFrame.cpp
// ADD TO constructor

menuName->Append(wxID_EXIT, "&Exit")


//=====================================================
// ####### Add a custom  menu item :custommenuitem
//=====================================================
// LOCATION: IMPLEMENTATION of MYwxFrame.cpp
// ADD TO constructor



//=====================================================
// ### Add a status bar to frame :sbar
//=====================================================




//=====================================================
// # Add an event handler :eventhandler
//=====================================================




//=====================================================
// ### ..with bind() and lambda :lambdabind
//     !!! prefered; for small functions
//=====================================================




//=====================================================
// ### ..with bind() and mfunction :functionbind
//     !!! prefered; for bigger functions
//=====================================================




//=====================================================
// ### ..with event table :eventtable
//     !!! outdated
//=====================================================




