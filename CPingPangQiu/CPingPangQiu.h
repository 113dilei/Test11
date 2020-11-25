// CPingPangQiu.h : main header file for the CPINGPANGQIU application
//

#if !defined(AFX_CPINGPANGQIU_H__F9B401B6_A298_4374_9216_15BF8D265772__INCLUDED_)
#define AFX_CPINGPANGQIU_H__F9B401B6_A298_4374_9216_15BF8D265772__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CCPingPangQiuApp:
// See CPingPangQiu.cpp for the implementation of this class
//

class CCPingPangQiuApp : public CWinApp
{
public:
	CCPingPangQiuApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCPingPangQiuApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CCPingPangQiuApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CPINGPANGQIU_H__F9B401B6_A298_4374_9216_15BF8D265772__INCLUDED_)
