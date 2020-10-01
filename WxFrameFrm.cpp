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
	
	EVT_TEXT(ID_WXEDIT1,WxFrameFrm::WxEdit1Updated)
	EVT_MENU(ID_MNU______1015, WxFrameFrm::openFile)
	EVT_MENU(ID_MNU______1031, WxFrameFrm::SaveFIle)
	EVT_MENU(ID_MNU______1014, WxFrameFrm::Showabout)
	EVT_MENU(ID_MNU__________1039, WxFrameFrm::HowToUse)
	EVT_MENU(ID_MNU______1037, WxFrameFrm::SetUpLanguage)
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

	WxStaticText1 = new wxStaticText(this, ID_WXSTATICTEXT1, _("欢迎使用"), wxPoint(694, 33), wxDefaultSize, 0, _("WxStaticText1"));
	WxStaticText1->SetBackgroundColour(wxColour(_("WHITE")));

	WxStaticText2 = new wxStaticText(this, ID_WXSTATICTEXT2, _("添加组件+(游标blender)"), wxPoint(12, 93), wxDefaultSize, 0, _("WxStaticText2"));
	WxStaticText2->SetBackgroundColour(wxColour(_("WHITE")));

	WxTreeCtrl1 = new wxTreeCtrl(this, ID_WXTREECTRL1, wxPoint(723, 65), wxSize(121, 97), wxTR_HAS_BUTTONS | wxTR_LINES_AT_ROOT | wxTR_HIDE_ROOT, wxDefaultValidator, _("WxTreeCtrl1"));
	wxTreeItemId WxTreeCtrl1NodeID = WxTreeCtrl1->AddRoot(_(""));
	WxTreeCtrl1NodeID = WxTreeCtrl1->AppendItem(WxTreeCtrl1NodeID, _("root"));
	WxTreeCtrl1NodeID = WxTreeCtrl1->AppendItem(WxTreeCtrl1NodeID, _("child"));
	WxTreeCtrl1NodeID = WxTreeCtrl1->AppendItem(WxTreeCtrl1->GetItemParent(WxTreeCtrl1NodeID), _("child1"));
	WxTreeCtrl1NodeID = WxTreeCtrl1->AppendItem(WxTreeCtrl1->GetItemParent(WxTreeCtrl1NodeID), _("节点编辑器"));

	WxListCtrl1 = new wxListCtrl(this, ID_WXLISTCTRL1, wxPoint(724, 176), wxSize(194, 119), wxLC_REPORT, wxDefaultValidator, _("WxListCtrl1"));
	WxListCtrl1->InsertColumn(0, _("属性"), wxLIST_FORMAT_LEFT, 50);
	WxListCtrl1->InsertColumn(1, _("文字"), wxLIST_FORMAT_LEFT, 50);
	WxListCtrl1->InsertColumn(2, _("高度"), wxLIST_FORMAT_LEFT, 50);
	WxListCtrl1->InsertColumn(3, _("高度"), wxLIST_FORMAT_LEFT, 50);

	WxPanel1 = new wxPanel(this, ID_WXPANEL1, wxPoint(268, 92), wxSize(231, 362));

	WxStaticText3 = new wxStaticText(WxPanel1, ID_WXSTATICTEXT3, _("这里是预览界面panel"), wxPoint(60, 68), wxDefaultSize, 0, _("WxStaticText3"));

	WxMenuBar1 = new wxMenuBar();
	wxMenu *ID_MNU______1012_Mnu_Obj = new wxMenu();
	ID_MNU______1012_Mnu_Obj->Append(ID_MNU______1015, _("打开"), _(""), wxITEM_NORMAL);
	ID_MNU______1012_Mnu_Obj->Append(ID_MNU______1016, _("新建"), _(""), wxITEM_NORMAL);
	ID_MNU______1012_Mnu_Obj->Append(ID_MNU______________1017, _("关闭当前文件"), _(""), wxITEM_NORMAL);
	ID_MNU______1012_Mnu_Obj->Append(ID_MNU______1031, _("保存"), _(""), wxITEM_NORMAL);
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
	ID_MNU______1013_Mnu_Obj->Append(ID_MNU__________1039, _("使用说明"), _(""), wxITEM_NORMAL);
	WxMenuBar1->Append(ID_MNU______1013_Mnu_Obj, _("帮助"));
	
	wxMenu *ID_MNU______1036_Mnu_Obj = new wxMenu();
	ID_MNU______1036_Mnu_Obj->Append(ID_MNU______1037, _("语言"), _(""), wxITEM_NORMAL);
	WxMenuBar1->Append(ID_MNU______1036_Mnu_Obj, _("设置"));
	SetMenuBar(WxMenuBar1);

	WxSaveFileDialog1 =  new wxFileDialog(this, _("Choose a file"), _(""), _(""), _("*.*"), wxFD_SAVE);

	WxToolBar1 = new wxToolBar(this, ID_WXTOOLBAR1, wxPoint(0, 0), wxSize(984, 29));

	WxStaticText4 = new wxStaticText(WxToolBar1, ID_WXSTATICTEXT4, _("新建文件.xml"), wxPoint(0, 0), wxDefaultSize, 0, _("WxStaticText4"));
	WxToolBar1->AddControl(WxStaticText4);

	WxOpenFileDialog1 =  new wxFileDialog(this, _("Choose a file"), _(""), _(""), _("*.*"), wxFD_OPEN);

	wxArrayString arrayStringFor_WxComboBox1;
	arrayStringFor_WxComboBox1.Add(_("预览模式（展示解析后的结果）"));
	arrayStringFor_WxComboBox1.Add(_("源代码（纯文本如.xml)格式"));
	WxComboBox1 = new wxComboBox(this, ID_WXCOMBOBOX1, _("切换显示模式"), wxPoint(728, 311), wxSize(145, 25), arrayStringFor_WxComboBox1, 0, wxDefaultValidator, _("WxComboBox1"));

	WxEdit1 = new wxTextCtrl(this, ID_WXEDIT1, _("editBox"), wxPoint(515, 112), wxSize(114, 145), 0, wxDefaultValidator, _("WxEdit1"));

	WxStaticText5 = new wxStaticText(this, ID_WXSTATICTEXT5, _("源码界面+编辑框"), wxPoint(521, 78), wxDefaultSize, 0, _("WxStaticText5"));
	WxStaticText5->SetBackgroundColour(wxColour(_("WHITE")));

	WxToolBar1->Realize();
	SetToolBar(WxToolBar1);
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
    msg.Printf("这个软件由小沙盒工作室创始人128hh开发，小沙盒工作室保留版权，此软件为开源软件，处于积极开发状态，作者是个中职技校生，专业不是学习的编程");    
	wxMessageBox(msg,"关于",wxOK,this);
    // insert your code here
}

/*
 * SaveFIle
 */
void WxFrameFrm::SaveFIle(wxCommandEvent& event)
{
    //保存文件
    //弹出窗口 
    WxSaveFileDialog1->ShowModal();
    //saveFileDialog(this,"save");
    
	// insert your code here
}

/*
 * WxListBox1Selected
 */
void WxFrameFrm::WxListBox1Selected(wxCommandEvent& event)
{
	// insert your code here
}

/*
 * Mnu1015Click
 */
void WxFrameFrm::Mnu1015Click(wxCommandEvent& event)
{
	// insert your code here
}

/*
 * openFile
 */
void WxFrameFrm::openFile(wxCommandEvent& event)
{
    
    WxOpenFileDialog1->ShowModal();
	// insert your code here
}

/*
 * HowToUse
 */
void WxFrameFrm::HowToUse(wxCommandEvent& event)
{
    wxString msg;
    msg.Printf("首先新建文件或者打开文件，然后再设计模式里进行编辑，最后选择导出build，根据自己的需求，选择是否导出对应平台的界面文件");    
	wxMessageBox(msg,"关于",wxOK,this);
	// insert your code here
}

/*
 * WxEdit1Updated
 */
void WxFrameFrm::WxEdit1Updated(wxCommandEvent& event)
{
	// insert your code here
}

/*
 * SetUpLanguage
 */
void WxFrameFrm::SetUpLanguage(wxCommandEvent& event)
{
    wxString msg;
    msg.Printf("此功能未开发，其他部分也有很多未开发的地方，欢迎各位大佬加入这个开源项目，贡献代码，通用应用程序界面生成器，帮助别人就是帮助自己，这是个辅助编程软件");    
	wxMessageBox(msg,"设置语言",wxOK,this);
	// insert your code here
}
