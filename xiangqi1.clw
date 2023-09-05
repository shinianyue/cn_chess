; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CJiangJunDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "xiangqi1.h"

ClassCount=4
Class1=CXiangqi1App
Class2=CXiangqi1Dlg
Class3=CAboutDlg

ResourceCount=5
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Resource3=IDD_XIANGQI1_DIALOG
Resource4=IDD_JIANGJUN
Class4=CJiangJunDlg
Resource5=IDR_MENU1

[CLS:CXiangqi1App]
Type=0
HeaderFile=xiangqi1.h
ImplementationFile=xiangqi1.cpp
Filter=N
LastObject=CXiangqi1App

[CLS:CXiangqi1Dlg]
Type=0
HeaderFile=xiangqi1Dlg.h
ImplementationFile=xiangqi1Dlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC
LastObject=CXiangqi1Dlg

[CLS:CAboutDlg]
Type=0
HeaderFile=xiangqi1Dlg.h
ImplementationFile=xiangqi1Dlg.cpp
Filter=D
LastObject=CAboutDlg
BaseClass=CDialog
VirtualFilter=dWC

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=5
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDC_DATETIMEPICKER1,SysDateTimePick32,1342242848
Control5=IDOK,button,1342242816

[DLG:IDD_XIANGQI1_DIALOG]
Type=1
Class=CXiangqi1Dlg
ControlCount=7
Control1=IDC_XIANGQI1_UNDO,button,1342242816
Control2=IDC_XIANGQI1_REDO,button,1342242816
Control3=IDC_XIANGQI1_HELP,button,1342242816
Control4=IDC_LIST1,listbox,1352667393
Control5=IDC_PROGRESS1,msctls_progress32,1350565889
Control6=IDC_XIANGQI1_PEACE,button,1342242816
Control7=IDC_JiangJun,button,1342242816

[MNU:IDR_MENU1]
Type=1
Class=?
Command1=IDM_NEW
Command2=IDOK
Command3=IDC_XIANGQI1_UNDO
Command4=IDC_XIANGQI1_REDO
Command5=IDC_XIANGQI1_HELP
Command6=IDC_XIANGQI1_PEACE
Command7=IDM_ABOUT
CommandCount=7

[DLG:IDD_JIANGJUN]
Type=1
Class=?
ControlCount=2
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816

[CLS:CJiangJunDlg]
Type=0
HeaderFile=JiangJunDlg.h
ImplementationFile=JiangJunDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=CJiangJunDlg
VirtualFilter=dWC

