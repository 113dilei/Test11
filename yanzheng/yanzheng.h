// yanzheng.h : main header file for the YANZHENG application
//

#if !defined(AFX_YANZHENG_H__964C5C67_3FCC_408D_880B_02B00BD63153__INCLUDED_)
#define AFX_YANZHENG_H__964C5C67_3FCC_408D_880B_02B00BD63153__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CYanzhengApp:
// See yanzheng.cpp for the implementation of this class
//

class CYanzhengApp : public CWinApp
{
public:
	CYanzhengApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CYanzhengApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CYanzhengApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_YANZHENG_H__964C5C67_3FCC_408D_880B_02B00BD63153__INCLUDED_)
