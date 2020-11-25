// CPingPangQiuView.h : interface of the CCPingPangQiuView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_CPINGPANGQIUVIEW_H__794A09A4_B44D_4BDD_BA32_045A955DD2CD__INCLUDED_)
#define AFX_CPINGPANGQIUVIEW_H__794A09A4_B44D_4BDD_BA32_045A955DD2CD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "PPQRun.h"
#include "PPQZaiRun.h"

class CCPingPangQiuView : public CView
{
protected: // create from serialization only
	CCPingPangQiuView();
	DECLARE_DYNCREATE(CCPingPangQiuView)

// Attributes
public:
	CCPingPangQiuDoc* GetDocument();

// Operations
public:
	CPPQRun m_PPQRun;
	CPPQZaiRun m_PPQZaiRun;
	int m_t;
	int m_xuan;
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCPingPangQiuView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CCPingPangQiuView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CCPingPangQiuView)
	afx_msg void OnMStart();
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnMStop();
	afx_msg void OnMZaiStart();
	afx_msg void OnMInit();
	afx_msg void OnMZaiInit();
	afx_msg void OnMSetChuShiShuDu();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in CPingPangQiuView.cpp
inline CCPingPangQiuDoc* CCPingPangQiuView::GetDocument()
   { return (CCPingPangQiuDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CPINGPANGQIUVIEW_H__794A09A4_B44D_4BDD_BA32_045A955DD2CD__INCLUDED_)
