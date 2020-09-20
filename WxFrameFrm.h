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
#include <wx/menu.h>
#include <wx/statusbr.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
////Header Include End

////Dialog Style Start
#undef WxFrameFrm_STYLE
#define WxFrameFrm_STYLE wxCAPTION | wxSYSTEM_MENU | wxMINIMIZE_BOX | wxCLOSE_BOX
////Dialog Style End

class  : public wxFrame
{
	private:
		DECLARE_EVENT_TABLE();
		
	public:
		(wxWindow *parent, wxWindowID id = 1, const wxString &title = wxT("wxFrame"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = WxFrameFrm_STYLE);
		virtual ~();
		void WxToolBar1Menu(wxCommandEvent& event);
		void WxFrameFrmActivate(wxActivateEvent& event);
		void aboutClick(wxCommandEvent& event);
		
	private:
		//Do not add custom control declarations between
		//GUI Control Declaration Start and GUI Control Declaration End.
		//wxDev-C++ will remove them. Add custom code after the block.
		////GUI Control Declaration Start
		wxStaticText *WxStaticText2;
		wxMenuBar *WxMenuBar1;
		wxStatusBar *WxStatusBar1;
		wxStaticBitmap *WxStaticBitmap1;
		wxStaticText *WxStaticText1;
		////GUI Control Declaration End
		
	private:
		//Note: if you receive any error with these enum IDs, then you need to
		//change your old form code that are based on the #define control IDs.
		//#defines may replace a numeric value for the enum names.
		//Try copy and pasting the below block in your old form header files.
		enum
		{
			////GUI Enum Control ID Start
			ID_WXSTATICTEXT2 = 1015,
			ID_MNU_MENUITEM1_1012 = 1012,
			ID_MNU__________1018 = 1018,
			ID_MNU______1015 = 1015,
			ID_MNU______________1019 = 1019,
			ID_MNU______1020 = 1020,
			ID_MNU_ABOUT_1013 = 1013,
			ID_MNU_ABOUT_1014 = 1014,
			
			ID_WXSTATUSBAR1 = 1011,
			ID_WXSTATICBITMAP1 = 1010,
			ID_WXSTATICTEXT1 = 1005,
			////GUI Enum Control ID End
			ID_DUMMY_VALUE_ //don't remove this value unless you have other enum values
		};
		
	private:
		void OnClose(wxCloseEvent& event);
		void CreateGUIControls();
};

#endif
