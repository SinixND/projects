/***************************************************************
 * Name:      appMain.h
 * Purpose:   Defines Application Frame
 * Author:    SinixND ()
 * Created:   2022-12-20
 * Copyright: SinixND ()
 * License:
 **************************************************************/

#ifndef APPMAIN_H
#define APPMAIN_H



#include "appApp.h"


#include "GUIFrame.h"

class appFrame: public GUIFrame
{
    public:
        appFrame(wxFrame *frame);
        ~appFrame();
    private:
        virtual void OnClose(wxCloseEvent& event);
        virtual void OnQuit(wxCommandEvent& event);
        virtual void OnAbout(wxCommandEvent& event);
};

#endif // APPMAIN_H
