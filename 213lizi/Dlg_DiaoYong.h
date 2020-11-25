#if !defined(AFX_DLG_DIAOYONG_H__7493BD90_29EC_4F17_A91E_0F212736DCC6__INCLUDED_)
#define AFX_DLG_DIAOYONG_H__7493BD90_29EC_4F17_A91E_0F212736DCC6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Dlg_DiaoYong.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDlg_DiaoYong dialog

class CDlg_DiaoYong : public CDialog
{
// Construction
public:
	CDlg_DiaoYong(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDlg_DiaoYong)
	enum { IDD = IDD_Dlg_DiaoYong };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDlg_DiaoYong)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDlg_DiaoYong)
	afx_msg void OnBeiDiaoexe();
	afx_msg void OnDiaoYong();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DLG_DIAOYONG_H__7493BD90_29EC_4F17_A91E_0F212736DCC6__INCLUDED_)
