/***************************************************************
 * Name:      project0App.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2022-12-02
 * Copyright:  ()
 * License:
 **************************************************************/

#include "wx_pch.h"
#include "project0App.h"

//(*AppHeaders
#include "project0Main.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(project0App);

bool project0App::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	project0Frame* Frame = new project0Frame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
