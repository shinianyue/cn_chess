# Microsoft Developer Studio Project File - Name="xiangqi1" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Application" 0x0101

CFG=xiangqi1 - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "xiangqi1.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "xiangqi1.mak" CFG="xiangqi1 - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "xiangqi1 - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "xiangqi1 - Win32 Debug" (based on "Win32 (x86) Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "xiangqi1 - Win32 Release"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /c
# ADD CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Yu"stdafx.h" /FD /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x804 /d "NDEBUG" /d "_AFXDLL"
# ADD RSC /l 0x804 /d "NDEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /machine:I386
# ADD LINK32 /nologo /subsystem:windows /machine:I386

!ELSEIF  "$(CFG)" == "xiangqi1 - Win32 Debug"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /GZ /c
# ADD CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_MBCS" /D "_AFXDLL" /FR /Yu"stdafx.h" /FD /GZ /c
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x804 /d "_DEBUG" /d "_AFXDLL"
# ADD RSC /l 0x804 /d "_DEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept
# ADD LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept

!ENDIF 

# Begin Target

# Name "xiangqi1 - Win32 Release"
# Name "xiangqi1 - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\BaseClasses.cpp
# End Source File
# Begin Source File

SOURCE=.\BaseDef.cpp
# End Source File
# Begin Source File

SOURCE=.\JiangJunDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\StdAfx.cpp
# ADD CPP /Yc"stdafx.h"
# End Source File
# Begin Source File

SOURCE=.\StepList.cpp
# End Source File
# Begin Source File

SOURCE=.\Thinker.cpp
# End Source File
# Begin Source File

SOURCE=.\xiangqi1.cpp
# End Source File
# Begin Source File

SOURCE=.\xiangqi1.rc
# End Source File
# Begin Source File

SOURCE=.\xiangqi1Dlg.cpp
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\BaseClasses.h
# End Source File
# Begin Source File

SOURCE=.\BaseDef.h
# End Source File
# Begin Source File

SOURCE=.\JiangJunDlg.h
# End Source File
# Begin Source File

SOURCE=.\Resource.h
# End Source File
# Begin Source File

SOURCE=.\StdAfx.h
# End Source File
# Begin Source File

SOURCE=.\StepList.h
# End Source File
# Begin Source File

SOURCE=.\Thinkdef.h
# End Source File
# Begin Source File

SOURCE=.\Thinker.h
# End Source File
# Begin Source File

SOURCE=.\xiangqi1.h
# End Source File
# Begin Source File

SOURCE=.\xiangqi1Dlg.h
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# Begin Source File

SOURCE=".\res\03114Q4M-0_lit.bmp"
# End Source File
# Begin Source File

SOURCE=".\res\0319142460-2.bmp"
# End Source File
# Begin Source File

SOURCE=.\res\BLACK_B.ico
# End Source File
# Begin Source File

SOURCE=.\res\BLACK_J.ico
# End Source File
# Begin Source File

SOURCE=.\res\BLACK_K.ico
# End Source File
# Begin Source File

SOURCE=.\res\BLACK_M.ico
# End Source File
# Begin Source File

SOURCE=.\res\BLACK_P.ico
# End Source File
# Begin Source File

SOURCE=.\res\BLACK_S.ico
# End Source File
# Begin Source File

SOURCE=.\res\BLACK_X.ico
# End Source File
# Begin Source File

SOURCE=.\res\Chess.ico
# End Source File
# Begin Source File

SOURCE=.\res\cut.ico
# End Source File
# Begin Source File

SOURCE=.\res\gamenew.ico
# End Source File
# Begin Source File

SOURCE=.\res\ico00001.ico
# End Source File
# Begin Source File

SOURCE=.\res\icon1.ico
# End Source File
# Begin Source File

SOURCE=.\res\icon2.ico
# End Source File
# Begin Source File

SOURCE=.\res\icon3.ico
# End Source File
# Begin Source File

SOURCE=.\res\KuGouMusic.ico
# End Source File
# Begin Source File

SOURCE=.\res\News.ico
# End Source File
# Begin Source File

SOURCE=.\res\RED_B.ico
# End Source File
# Begin Source File

SOURCE=.\res\RED_J.ico
# End Source File
# Begin Source File

SOURCE=.\res\RED_K.ico
# End Source File
# Begin Source File

SOURCE=.\res\RED_M.ico
# End Source File
# Begin Source File

SOURCE=.\res\RED_P.ico
# End Source File
# Begin Source File

SOURCE=.\res\RED_S.ico
# End Source File
# Begin Source File

SOURCE=.\res\RED_X.ico
# End Source File
# Begin Source File

SOURCE=.\res\User.ico
# End Source File
# Begin Source File

SOURCE=.\res\xiangqi1.ico
# End Source File
# Begin Source File

SOURCE=.\res\xiangqi1.rc2
# End Source File
# Begin Source File

SOURCE=".\res\Zip File.ico"
# End Source File
# End Group
# Begin Source File

SOURCE=.\ReadMe.txt
# End Source File
# End Target
# End Project
