/***************************************************************
 * Name:      project0Main.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2022-12-02
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef PROJECT0MAIN_H
#define PROJECT0MAIN_H

//(*Headers(project0Frame)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/statusbr.h>
#include <wx/textctrl.h>
//*)

class project0Frame: public wxFrame
{
    public:

        project0Frame(wxWindow* parent,wxWindowID id = -1);
        virtual ~project0Frame();

    private:

        //(*Handlers(project0Frame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnTextCtrl1Text(wxCommandEvent& event);
        void OnClose(wxCloseEvent& event);
        void OnTextCtrl1Text1(wxCommandEvent& event);
        void OnButton20Click(wxCommandEvent& event);
        void OnButton3Click(wxCommandEvent& event);
        //*)

        //(*Identifiers(project0Frame)
        static const long ID_TEXTCTRL1;
        static const long ID_BUTTON15;
        static const long ID_BUTTON14;
        static const long ID_BUTTON13;
        static const long ID_BUTTON12;
        static const long ID_BUTTON11;
        static const long ID_BUTTON10;
        static const long ID_BUTTON9;
        static const long ID_BUTTON8;
        static const long ID_BUTTON7;
        static const long ID_BUTTON16;
        static const long ID_BUTTON6;
        static const long ID_BUTTON5;
        static const long ID_BUTTON4;
        static const long ID_BUTTON2;
        static const long ID_BUTTON1;
        static const long ID_BUTTON3;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(project0Frame)
        wxButton* Button10;
        wxButton* Button11;
        wxButton* Button12;
        wxButton* Button13;
        wxButton* Button14;
        wxButton* Button15;
        wxButton* Button16;
        wxButton* Button1;
        wxButton* Button2;
        wxButton* Button3;
        wxButton* Button4;
        wxButton* Button5;
        wxButton* Button6;
        wxButton* Button7;
        wxButton* Button8;
        wxButton* Button9;
        wxStatusBar* StatusBar1;
        wxTextCtrl* TextCtrl1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // PROJECT0MAIN_H
