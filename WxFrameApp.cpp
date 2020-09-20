//---------------------------------------------------------------------------
//
// Name:        WxFrameApp.cpp
// Author:      Administrator
// Created:     2020/9/20 17:02:35
// Description: 
//
//---------------------------------------------------------------------------

#include "WxFrameApp.h"
#include "WxFrameFrm.h"

IMPLEMENT_APP(WxFrameFrmApp)

bool WxFrameFrmApp::OnInit()
{
    WxFrameFrm* frame = new WxFrameFrm(NULL);
    SetTopWindow(frame);
    frame->Show();
    return true;
}
 
int WxFrameFrmApp::OnExit()
{
	return 0;
}
