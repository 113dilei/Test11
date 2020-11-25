// 213lizi.h : main header file for the 213LIZI application
//

#if !defined(AFX_213LIZI_H__19A61D57_BD4E_4A7A_BE4A_799F86E68DCA__INCLUDED_)
#define AFX_213LIZI_H__19A61D57_BD4E_4A7A_BE4A_799F86E68DCA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols
#include "Globals.h"

/////////////////////////////////////////////////////////////////////////////
// CMy213liziApp:
// See 213lizi.cpp for the implementation of this class
//

class CMy213liziApp : public CWinApp
{
public:
	CMy213liziApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy213liziApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMy213liziApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_213LIZI_H__19A61D57_BD4E_4A7A_BE4A_799F86E68DCA__INCLUDED_)
