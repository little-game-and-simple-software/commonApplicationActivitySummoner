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
#include "Images/WxFrameFrm_frmNewForm_XPM.xpm"
////Header Include End
#include <stdio.h>
//----------------------------------------------------------------------------
// WxFrameFrm
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(WxFrameFrm,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(WxFrameFrm::OnClose)
	EVT_KEY_DOWN(WxFrameFrm::WxFrameFrmKeyDown)
	EVT_MOUSE_EVENTS(WxFrameFrm::WxFrameFrmMouseEvents)
	EVT_MENU(ID_MNU______1014, WxFrameFrm::Showabout)
END_EVENT_TABLE()
////Event Table End

WxFrameFrm::WxFrameFrm(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

WxFrameFrm::~WxFrameFrm()
{
}

void WxFrameFrm::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	WxStaticText1 = new wxStaticText(this, ID_WXSTATICTEXT1, _("欢迎使用"), wxPoint(475, 157), wxDefaultSize, 0, _("WxStaticText1"));
	WxStaticText1->SetBackgroundColour(wxColour(_("WHITE")));

	WxStaticText2 = new wxStaticText(this, ID_WXSTATICTEXT2, _("添加组件+(游标blender)"), wxPoint(172, 358), wxDefaultSize, 0, _("WxStaticText2"));
	WxStaticText2->SetBackgroundColour(wxColour(_("WHITE")));

	WxTreeCtrl1 = new wxTreeCtrl(this, ID_WXTREECTRL1, wxPoint(779, 4), wxSize(121, 97), wxTR_HAS_BUTTONS | wxTR_LINES_AT_ROOT | wxTR_HIDE_ROOT, wxDefaultValidator, _("WxTreeCtrl1"));
	wxTreeItemId WxTreeCtrl1NodeID = WxTreeCtrl1->AddRoot(_(""));
	WxTreeCtrl1NodeID = WxTreeCtrl1->AppendItem(WxTreeCtrl1NodeID, _("root"));
	WxTreeCtrl1NodeID = WxTreeCtrl1->AppendItem(WxTreeCtrl1NodeID, _("child"));
	WxTreeCtrl1NodeID = WxTreeCtrl1->AppendItem(WxTreeCtrl1->GetItemParent(WxTreeCtrl1NodeID), _("child1"));
	WxTreeCtrl1NodeID = WxTreeCtrl1->AppendItem(WxTreeCtrl1->GetItemParent(WxTreeCtrl1NodeID), _("节点编辑器"));

	wxArrayString arrayStringFor_WxListBox1;
	WxListBox1 = new wxListBox(this, ID_WXLISTBOX1, wxPoint(692, 301), wxSize(121, 97), arrayStringFor_WxListBox1, wxLB_SINGLE);

	WxListCtrl1 = new wxListCtrl(this, ID_WXLISTCTRL1, wxPoint(687, 151), wxSize(194, 119), wxLC_REPORT, wxDefaultValidator, _("WxListCtrl1"));
	WxListCtrl1->InsertColumn(0, _("属性"), wxLIST_FORMAT_LEFT, 50);
	WxListCtrl1->InsertColumn(1, _("文字"), wxLIST_FORMAT_LEFT, 50);
	WxListCtrl1->InsertColumn(2, _("高度"), wxLIST_FORMAT_LEFT, 50);
	WxListCtrl1->InsertColumn(3, _("高度"), wxLIST_FORMAT_LEFT, 50);

	WxMenuBar1 = new wxMenuBar();
	wxMenu *ID_MNU______1012_Mnu_Obj = new wxMenu();
	ID_MNU______1012_Mnu_Obj->Append(ID_MNU______1015, _("打开"), _(""), wxITEM_NORMAL);
	ID_MNU______1012_Mnu_Obj->Append(ID_MNU______1016, _("新建"), _(""), wxITEM_NORMAL);
	ID_MNU______1012_Mnu_Obj->Append(ID_MNU______________1017, _("关闭当前文件"), _(""), wxITEM_NORMAL);
	WxMenuBar1->Append(ID_MNU______1012_Mnu_Obj, _("文件"));
	
	wxMenu *ID_MNU_____________BUILD_1019_Mnu_Obj = new wxMenu();
	WxMenuBar1->Append(ID_MNU_____________BUILD_1019_Mnu_Obj, _("生成界面文件build"));
	wxMenu *ID_MNU__________1018_Mnu_Obj = new wxMenu();
	ID_MNU__________1018_Mnu_Obj->Append(ID_MNU______1020, _("按钮"), _(""), wxITEM_NORMAL);
	ID_MNU__________1018_Mnu_Obj->Append(ID_MNU________1021, _("编辑框"), _(""), wxITEM_NORMAL);
	ID_MNU__________1018_Mnu_Obj->Append(ID_MNU______1022, _("文本"), _(""), wxITEM_NORMAL);
	ID_MNU__________1018_Mnu_Obj->Append(ID_MNU______1023, _("图片"), _(""), wxITEM_NORMAL);
	WxMenuBar1->Append(ID_MNU__________1018_Mnu_Obj, _("添加组件"));
	
	wxMenu *ID_MNU______1013_Mnu_Obj = new wxMenu();
	ID_MNU______1013_Mnu_Obj->Append(ID_MNU______1014, _("关于"), _(""), wxITEM_NORMAL);
	WxMenuBar1->Append(ID_MNU______1013_Mnu_Obj, _("帮助"));
	SetMenuBar(WxMenuBar1);

	WxPanel1 = new wxPanel(this, ID_WXPANEL1, wxPoint(384, 245), wxSize(223, 196));

	WxStaticText3 = new wxStaticText(WxPanel1, ID_WXSTATICTEXT3, _("panel"), wxPoint(59, 68), wxDefaultSize, 0, _("WxStaticText3"));

	SetTitle(_("通用应用程序界面文件生成器"));
	SetIcon(WxFrameFrm_frmNewForm_XPM);
	SetSize(8,8,1000,720);
	Center();
	
	////GUI Items Creation End
}

void WxFrameFrm::OnClose(wxCloseEvent& event)
{
	Destroy();
}

/*
 * WxToolBar1Menu
 */
void WxFrameFrm::WxToolBar1Menu(wxCommandEvent& event)
{
	// insert your code here
}

/*
 * Mnu1014Click
 */
 //about 
void WxFrameFrm::Mnu1014Click(wxCommandEvent& event)
{
	// insert your code here
	
}

/*
 * WxFrameFrmMouseEvents
 */
 //鼠标事件 
void WxFrameFrm::WxFrameFrmMouseEvents(wxMouseEvent& event)
{
   printf("mouse event"); 
   if(event.Moving())
   {
    printf("mouse moved");    
    }
   //if event
	// insert your code here
}

/*
 * WxFrameFrmKeyDown
 */
void WxFrameFrm::WxFrameFrmKeyDown(wxKeyEvent& event)
{
    printf("on key down");
	// insert your code here
}

/*
 * Showabout
 */
void WxFrameFrm::Showabout(wxCommandEvent& event)
{
    wxString msg;
    msg.Printf("这个软件由小沙盒工作室创始人128hh开发，小沙盒工作室保留版权");    
	wxMessageBox(msg,"关于",wxOK,this);
    // insert your code here
}
