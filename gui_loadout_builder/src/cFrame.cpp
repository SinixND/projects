#include "cFrame.h"

//define constructor
cFrame::cFrame(const wxString& title) : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(250, 150)){    
    Centre();
};

//define destructor
cFrame::~cFrame(){
};
