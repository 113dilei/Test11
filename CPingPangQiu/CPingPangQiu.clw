; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CCPingPangQiuView
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "CPingPangQiu.h"
LastPage=0

ClassCount=6
Class1=CCPingPangQiuApp
Class2=CCPingPangQiuDoc
Class3=CCPingPangQiuView
Class4=CMainFrame

ResourceCount=3
Resource1=IDR_MAINFRAME
Class5=CAboutDlg
Resource2=IDD_ABOUTBOX
Class6=CDlg_SetShuDu
Resource3=IDD_Dlg_SetShuDu

[CLS:CCPingPangQiuApp]
Type=0
HeaderFile=CPingPangQiu.h
ImplementationFile=CPingPangQiu.cpp
Filter=N

[CLS:CCPingPangQiuDoc]
Type=0
HeaderFile=CPingPangQiuDoc.h
ImplementationFile=CPingPangQiuDoc.cpp
Filter=N

[CLS:CCPingPangQiuView]
Type=0
HeaderFile=CPingPangQiuView.h
ImplementationFile=CPingPangQiuView.cpp
Filter=C
BaseClass=CView
VirtualFilter=VWC
LastObject=CCPingPangQiuView


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T
LastObject=ID_M_SetChuShiShuDu




[CLS:CAboutDlg]
Type=0
HeaderFile=CPingPangQiu.cpp
ImplementationFile=CPingPangQiu.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_M_Start
Command2=ID_M_Stop
Command3=ID_M_Init
Command4=ID_M_SetChuShiShuDu
Command5=ID_M_ZaiStart
Command6=ID_M_ZaiInit
CommandCount=6

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_PRINT
Command5=ID_EDIT_UNDO
Command6=ID_EDIT_CUT
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_EDIT_UNDO
Command10=ID_EDIT_CUT
Command11=ID_EDIT_COPY
Command12=ID_EDIT_PASTE
Command13=ID_NEXT_PANE
Command14=ID_PREV_PANE
CommandCount=14

[TB:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_FILE_PRINT
Command8=ID_APP_ABOUT
CommandCount=8

[DLG:IDD_Dlg_SetShuDu]
Type=1
Class=CDlg_SetShuDu
ControlCount=6
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_EDT_vx,edit,1350631552
Control5=IDC_STATIC,static,1342308352
Control6=IDC_EDT_vy,edit,1350631552

[CLS:CDlg_SetShuDu]
Type=0
HeaderFile=Dlg_SetShuDu.h
ImplementationFile=Dlg_SetShuDu.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=CDlg_SetShuDu

