/***************************************************************
 * Name:      appApp.cpp
 * Purpose:   Code for Application Class
 * Author:    SinixND ()
 * Created:   2022-12-20
 * Copyright: SinixND ()
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "appApp.h"
#include "appMain.h"

IMPLEMENT_APP(appApp);

bool appApp::OnInit()
{
    appFrame* frame = new appFrame(0L);
    
    frame->Show();
    
    return true;
}
