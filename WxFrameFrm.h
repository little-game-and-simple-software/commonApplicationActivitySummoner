///-----------------------------------------------------------------
///
/// @file      WxFrameFrm.h
/// @author    Administrator
/// Created:   2020/9/20 17:02:35
/// @section   DESCRIPTION
///            WxFrameFrm class declaration
///
///------------------------------------------------------------------

#ifndef __WXFRAMEFRM_H__
#define __WXFRAMEFRM_H__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
	#include <wx/frame.h>
#else
	#include <wx/wxprec.h>
#endif

//Do not add custom headers between 
//Header Include Start and Header Include End.
//wxDev-C++ designer will remove them. Add custom headers after the block.
////Header Include Start
#include <wx/statbmp.h>
#include <wx/stattext.h>
#include <wx/button.h>
////Header Include End

////Dialog Style Start
#undef WxFrameFrm_STYLE
#define WxFrameFrm_STYLE wxCAPTION | wxSYSTEM_MENU | wxMINIMIZE_BOX | wxCLOSE_BOX
////Dialog Style End

class WxFrameFrm : public wxFrame
{
	private:
		DECLARE_EVENT_TABLE();
		
	public:
		WxFrameFrm(wxWindow *parent, wxWindowID id = 1, const wxString &title = wxT("WxFrame"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = WxFrameFrm_STYLE);
		virtual ~WxFrameFrm();
		void WxToolBar1Menu(wxCommandEvent& event);
		
	private:
		//Do not add custom control declarations between
		//GUI Control Declaration Start and GUI Control Declaration End.
		//wxDev-C++ will remove them. Add custom code after the block.
		////GUI Control Declaration Start
		wxStaticBitmap *WxStaticBitmap1;
		wxStaticText *WxStaticText1;
		wxButton *WxButton1;
		////GUI Control Declaration End
		
	private:
		//Note: if you receive any error with these enum IDs, then you need to
		//change your old form code that are based on the #define control IDs.
		//#defines may replace a numeric value for the enum names.
		//Try copy and pasting the below block in your old form header files.
		enum
		{
			////GUI Enum Control ID Start
			ID_WXSTATICBITMAP1 = 1010,
			ID_WXSTATICTEXT1 = 1005,
			ID_WXBUTTON1 = 1004,
			////GUI Enum Control ID End
			ID_DUMMY_VALUE_ //don't remove this value unless you have other enum values
		};
		
	private:
		void OnClose(wxCloseEvent& event);
		void CreateGUIControls();
};

#endif
