#include "cFrames.h"
#include "wx/event.h"

//define constructor
cFrames::cFrames(const wxString &rTitle) : wxFrame(NULL, wxID_ANY, rTitle, wxDefaultPosition, wxSize(250, 150))
{
    //define an icon
    wxString cwd_Path  =  wxGetCwd();
    SetIcon(wxIcon(cwd_Path + "/data/graphics/LoadoutBuilder.xpm"));
    Center();

    //define a panel to place a button on
    wxPanel *pPanel = new wxPanel(this, wxID_ANY);

    //define a button
    wxButton *pButton = new wxButton(pPanel, wxID_EXIT, "Exit", wxPoint(20, 20));

    //define a connection 
    Connect(wxID_EXIT, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(cFrames::OnQuit));

    //set the focus on the button
    pButton->SetFocus();
    Center();


};

void cFrames::OnQuit(wxCommandEvent &WXUNUSED(rEventQuit))
{
    //define the function
    Close(true);
}

//destructor
cFrames::~cFrames()
{
};

