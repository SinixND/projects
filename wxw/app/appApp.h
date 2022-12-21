/***************************************************************
 * Name:      appApp.h
 * Purpose:   Defines Application Class
 * Author:    SinixND ()
 * Created:   2022-12-20
 * Copyright: SinixND ()
 * License:
 **************************************************************/

#ifndef APPAPP_H
#define APPAPP_H

#include <wx/app.h>

class appApp : public wxApp
{
    public:
        virtual bool OnInit();
};

#endif // APPAPP_H
