#include <wx/stattext.h>
#include "cFrames.h"

cLeftPanel::cLeftPanel(wxPanel *pParent)
       : wxPanel(parent, -1, wxPoint(-1, -1), wxSize(-1, -1), wxBORDER_SUNKEN)
{
  count = 0;
  pm_parent = parent;
  m_plus = new wxButton(this, ID_PLUS, wxT("+"), 
      wxPoint(10, 10));
  m_minus = new wxButton(this, ID_MINUS, wxT("-"), 
      wxPoint(10, 60));
  Connect(ID_PLUS, wxEVT_COMMAND_BUTTON_CLICKED, 
      wxCommandEventHandler(cLeftPanel::OnPlus));
  Connect(ID_MINUS, wxEVT_COMMAND_BUTTON_CLICKED, 
      wxCommandEventHandler(cLeftPanel::OnMinus));
}

void cLeftPanel::OnPlus(wxCommandEvent & WXUNUSED(event))
{
  count++;

  Communicate *comm = (Communicate *) pm_parent->GetParent();
  comm->m_rp->m_text->SetLabel(wxString::Format(wxT("%d"), count));
}

void cLeftPanel::OnMinus(wxCommandEvent & WXUNUSED(event))
{
  count--;

  Communicate *comm = (Communicate *) pm_parent->GetParent();
  comm->m_rp->m_text->SetLabel(wxString::Format(wxT("%d"), count));
}


cRightPanel::cRightPanel(wxPanel *pParent)
       : wxPanel(parent, wxID_ANY, wxDefaultPosition, 
         wxSize(270, 150), wxBORDER_SUNKEN)
{
    m_text = new wxStaticText(this, -1, wxT("0"), wxPoint(40, 60));
}

