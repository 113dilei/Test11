#if !defined(AFX_DLG_SETSHUDU_H__5BE3BCC0_226A_4B65_88BB_944BAEF5910F__INCLUDED_)
#define AFX_DLG_SETSHUDU_H__5BE3BCC0_226A_4B65_88BB_944BAEF5910F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Dlg_SetShuDu.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDlg_SetShuDu dialog

class CDlg_SetShuDu : public CDialog
{
// Construction
public:
	CDlg_SetShuDu(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDlg_SetShuDu)
	enum { IDD = IDD_Dlg_SetShuDu };
	float	m_vx;
	float	m_vy;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDlg_SetShuDu)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDlg_SetShuDu)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DLG_SETSHUDU_H__5BE3BCC0_226A_4B65_88BB_944BAEF5910F__INCLUDED_)
