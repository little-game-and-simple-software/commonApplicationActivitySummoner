//---------------------------------------------------------------------------
//
// Name:        WxFrameApp.h
// Author:      Administrator
// Created:     2020/9/20 17:02:35
// Description: 
//
//---------------------------------------------------------------------------

#ifndef __WXFRAMEFRMApp_h__
#define __WXFRAMEFRMApp_h__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#else
	#include <wx/wxprec.h>
#endif

class WxFrameFrmApp : public wxApp
{
	public:
		bool OnInit();
		int OnExit();
};

#endif
