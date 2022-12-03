/***************************************************************
 * Name:      project0Main.cpp
 * Purpose:   Code for Application Frame
 * Author:     ()
 * Created:   2022-12-02
 * Copyright:  ()
 * License:
 **************************************************************/

#include "wx_pch.h"
#include "project0Main.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(project0Frame)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(project0Frame)
const long project0Frame::ID_TEXTCTRL1 = wxNewId();
const long project0Frame::ID_BUTTON15 = wxNewId();
const long project0Frame::ID_BUTTON14 = wxNewId();
const long project0Frame::ID_BUTTON13 = wxNewId();
const long project0Frame::ID_BUTTON12 = wxNewId();
const long project0Frame::ID_BUTTON11 = wxNewId();
const long project0Frame::ID_BUTTON10 = wxNewId();
const long project0Frame::ID_BUTTON9 = wxNewId();
const long project0Frame::ID_BUTTON8 = wxNewId();
const long project0Frame::ID_BUTTON7 = wxNewId();
const long project0Frame::ID_BUTTON16 = wxNewId();
const long project0Frame::ID_BUTTON6 = wxNewId();
const long project0Frame::ID_BUTTON5 = wxNewId();
const long project0Frame::ID_BUTTON4 = wxNewId();
const long project0Frame::ID_BUTTON2 = wxNewId();
const long project0Frame::ID_BUTTON1 = wxNewId();
const long project0Frame::ID_BUTTON3 = wxNewId();
const long project0Frame::idMenuQuit = wxNewId();
const long project0Frame::idMenuAbout = wxNewId();
const long project0Frame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(project0Frame,wxFrame)
    //(*EventTable(project0Frame)
    //*)
END_EVENT_TABLE()

project0Frame::project0Frame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(project0Frame)
    wxMenu* Menu1;
    wxMenu* Menu2;
    wxMenuBar* MenuBar1;
    wxMenuItem* MenuItem1;
    wxMenuItem* MenuItem2;

    Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
    SetClientSize(wxSize(328,430));
    TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, _("0"), wxPoint(24,16), wxSize(280,56), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    Button15 = new wxButton(this, ID_BUTTON15, _("1"), wxPoint(24,88), wxSize(56,64), 0, wxDefaultValidator, _T("ID_BUTTON15"));
    Button14 = new wxButton(this, ID_BUTTON14, _("0"), wxPoint(96,328), wxSize(56,64), 0, wxDefaultValidator, _T("ID_BUTTON14"));
    Button13 = new wxButton(this, ID_BUTTON13, _("="), wxPoint(168,328), wxSize(56,64), 0, wxDefaultValidator, _T("ID_BUTTON13"));
    Button12 = new wxButton(this, ID_BUTTON12, _("/"), wxPoint(248,328), wxSize(56,64), 0, wxDefaultValidator, _T("ID_BUTTON12"));
    Button11 = new wxButton(this, ID_BUTTON11, _("*"), wxPoint(248,248), wxSize(56,64), 0, wxDefaultValidator, _T("ID_BUTTON11"));
    Button10 = new wxButton(this, ID_BUTTON10, _("-"), wxPoint(248,168), wxSize(56,64), 0, wxDefaultValidator, _T("ID_BUTTON10"));
    Button9 = new wxButton(this, ID_BUTTON9, _("+"), wxPoint(248,88), wxSize(56,64), 0, wxDefaultValidator, _T("ID_BUTTON9"));
    Button8 = new wxButton(this, ID_BUTTON8, _("9"), wxPoint(168,248), wxSize(56,64), 0, wxDefaultValidator, _T("ID_BUTTON8"));
    Button7 = new wxButton(this, ID_BUTTON7, _("8"), wxPoint(96,248), wxSize(56,64), 0, wxDefaultValidator, _T("ID_BUTTON7"));
    Button16 = new wxButton(this, ID_BUTTON16, _("7"), wxPoint(24,248), wxSize(56,64), 0, wxDefaultValidator, _T("ID_BUTTON16"));
    Button6 = new wxButton(this, ID_BUTTON6, _("C"), wxPoint(24,328), wxSize(56,64), 0, wxDefaultValidator, _T("ID_BUTTON6"));
    Button5 = new wxButton(this, ID_BUTTON5, _("6"), wxPoint(168,168), wxSize(56,64), 0, wxDefaultValidator, _T("ID_BUTTON5"));
    Button4 = new wxButton(this, ID_BUTTON4, _("5"), wxPoint(96,168), wxSize(56,64), 0, wxDefaultValidator, _T("ID_BUTTON4"));
    Button2 = new wxButton(this, ID_BUTTON2, _("4"), wxPoint(24,168), wxSize(56,64), 0, wxDefaultValidator, _T("ID_BUTTON2"));
    Button1 = new wxButton(this, ID_BUTTON1, _("3"), wxPoint(168,88), wxSize(56,64), 0, wxDefaultValidator, _T("ID_BUTTON1"));
    Button3 = new wxButton(this, ID_BUTTON3, _("2"), wxPoint(96,88), wxSize(56,64), 0, wxDefaultValidator, _T("ID_BUTTON3"));
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);

    Connect(ID_TEXTCTRL1,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&project0Frame::OnTextCtrl1Text1);
    Connect(ID_BUTTON15,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&project0Frame::OnButton3Click);
    Connect(ID_BUTTON14,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&project0Frame::OnButton3Click);
    Connect(ID_BUTTON13,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&project0Frame::OnButton3Click);
    Connect(ID_BUTTON12,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&project0Frame::OnButton3Click);
    Connect(ID_BUTTON11,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&project0Frame::OnButton3Click);
    Connect(ID_BUTTON10,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&project0Frame::OnButton3Click);
    Connect(ID_BUTTON9,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&project0Frame::OnButton3Click);
    Connect(ID_BUTTON8,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&project0Frame::OnButton3Click);
    Connect(ID_BUTTON7,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&project0Frame::OnButton3Click);
    Connect(ID_BUTTON16,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&project0Frame::OnButton3Click);
    Connect(ID_BUTTON6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&project0Frame::OnButton3Click);
    Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&project0Frame::OnButton3Click);
    Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&project0Frame::OnButton3Click);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&project0Frame::OnButton3Click);
    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&project0Frame::OnButton3Click);
    Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&project0Frame::OnButton3Click);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&project0Frame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&project0Frame::OnAbout);
    Connect(wxID_ANY,wxEVT_CLOSE_WINDOW,(wxObjectEventFunction)&project0Frame::OnClose);
    //*)
}

project0Frame::~project0Frame()
{
    //(*Destroy(project0Frame)
    //*)
}

void project0Frame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void project0Frame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void project0Frame::OnButton3Click(wxCommandEvent& event)
{
}
