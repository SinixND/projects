#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <wx/wxprec.h>

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#endif

//make a new frame class; must derive from wxFrame
class MainWindow : public wxFrame{
public:
	//declare constructor with title parameter
	MainWindow(const wxString& title);
};

#endif
