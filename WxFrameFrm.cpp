///-----------------------------------------------------------------
///
/// @file      WxFrameFrm.cpp
/// @author    Administrator
/// Created:   2020/9/20 17:02:35
/// @section   DESCRIPTION
///            WxFrameFrm class implementation
///
///------------------------------------------------------------------

#include "WxFrameFrm.h"

//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
#include "Images/WxFrameFrm_WxStaticBitmap1_XPM.xpm"
////Header Include End

//----------------------------------------------------------------------------
// WxFrameFrm
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(wxFrame,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(wxFrame::OnClose)
	EVT_ACTIVATE(wxFrame::WxFrameFrmActivate)
	EVT_MENU(ID_MNU_ABOUT_1014, wxFrame::aboutClick)
END_EVENT_TABLE()
////Event Table End

::(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

wxFrame::~()
{
}

void ::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	wxInitAllImageHandlers();   //Initialize graphic format handlers

	WxStaticText1 = new wxStaticText(this, ID_WXSTATICTEXT1, _("欢迎使用"), wxPoint(593, 148), wxDefaultSize, 0, _("WxStaticText1"));
	WxStaticText1->SetBackgroundColour(wxColour(_("WHITE")));

	wxBitmap WxStaticBitmap1_BITMAP(wxFrame_WxStaticBitmap1_XPM);
	WxStaticBitmap1 = new wxStaticBitmap(this, ID_WXSTATICBITMAP1, WxStaticBitmap1_BITMAP, wxPoint(512, 65), wxSize(32, 32));

	WxStatusBar1 = new wxStatusBar(this, ID_WXSTATUSBAR1);
	WxStatusBar1->SetFieldsCount(3);
	WxStatusBar1->SetStatusText(_("welcomeToUse developer:128hh"),0);
	WxStatusBar1->SetStatusText(_(""),1);
	WxStatusBar1->SetStatusText(_("powered by wxdev"),2);
	int WxStatusBar1_Widths[3];
	WxStatusBar1_Widths[0] = 200;
	WxStatusBar1_Widths[1] = 0;
	WxStatusBar1_Widths[2] = -1;
	WxStatusBar1->SetStatusWidths(3,WxStatusBar1_Widths);

	WxMenuBar1 = new wxMenuBar();
	wxMenu *ID_MNU_MENUITEM1_1012_Mnu_Obj = new wxMenu();
	ID_MNU_MENUITEM1_1012_Mnu_Obj->Append(ID_MNU__________1018, _("新建文件"), _(""), wxITEM_NORMAL);
	ID_MNU_MENUITEM1_1012_Mnu_Obj->Append(ID_MNU______1015, _("打开"), _(""), wxITEM_NORMAL);
	ID_MNU_MENUITEM1_1012_Mnu_Obj->Append(ID_MNU______________1019, _("关闭当前文件"), _(""), wxITEM_NORMAL);
	WxMenuBar1->Append(ID_MNU_MENUITEM1_1012_Mnu_Obj, _("&File"));
	
	wxMenu *ID_MNU______1020_Mnu_Obj = new wxMenu();
	WxMenuBar1->Append(ID_MNU______1020_Mnu_Obj, _("设置"));
	wxMenu *ID_MNU_ABOUT_1013_Mnu_Obj = new wxMenu();
	ID_MNU_ABOUT_1013_Mnu_Obj->Append(ID_MNU_ABOUT_1014, _("关于"), _("关于"), wxITEM_NORMAL);
	WxMenuBar1->Append(ID_MNU_ABOUT_1013_Mnu_Obj, _("help"));
	SetMenuBar(WxMenuBar1);

	WxStaticText2 = new wxStaticText(this, ID_WXSTATICTEXT2, _("添加物体的游标+（类比Blender2.7的游标操作)"), wxPoint(165, 230), wxDefaultSize, 0, _("WxStaticText2"));
	WxStaticText2->SetBackgroundColour(wxColour(_("WHITE")));

	SetStatusBar(WxStatusBar1);
	SetTitle(_("wxFrame"));
	SetIcon(wxNullIcon);
	SetSize(8,8,1000,600);
	Center();
	
	////GUI Items Creation End
}

void wxFrame::OnClose(wxCloseEvent& event)
{
	Destroy();
}

/*
 * WxToolBar1Menu
 */
void wxFrame::WxToolBar1Menu(wxCommandEvent& event)
{
	// insert your code here
}

/*
 * WxFrameFrmActivate
 */
void wxFrame::WxFrameFrmActivate(wxActivateEvent& event)
{
	// insert your code here
}

/*
 * Mnuhelp1014Click
 */

/*
 * Mnuhelp1014Click
 */

/*
 * Mnuabout1015Click
 */

/*
 * aboutClick
 */
void wxFrame::aboutClick(wxCommandEvent& event)
{
  //  event.Skip();
    wxString msg;
    msg.Printf(_T("This software developed by 128hh"));
    wxMessageBox(msg,_T("About"),wxICON_INFORMATION|wxOK, this);
	// insert your code here
}
