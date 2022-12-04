#include "MainWindow.h"

//define constructor
MainWindow::MainWindow(const wxString& title) : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(250, 150)){    
    wxString cwd_path  =  wxGetCwd();
    SetIcon(wxIcon(cwd_path + "/data/graphics/LoadoutBuilder.xpm"));
    Center();
};
