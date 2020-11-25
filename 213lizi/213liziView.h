// 213liziView.h : interface of the CMy213liziView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_213LIZIVIEW_H__47677082_0618_49E7_A82B_C76D12293855__INCLUDED_)
#define AFX_213LIZIVIEW_H__47677082_0618_49E7_A82B_C76D12293855__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "Globals.h"
#include "ZhengTaiFenBu.h"


class CMy213liziView : public CView
{
protected: // create from serialization only
	CMy213liziView();
	DECLARE_DYNCREATE(CMy213liziView)

// Attributes
public:
//	CDC *pDC;
	CMy213liziDoc* GetDocument();

// Operations
public:

	int m_shujuchuli;
	int m_fenxi;
	ZhengTaiFenBu m_ztfb;

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy213liziView)
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
	void FenXI(CDC *pDC);
	void ShuJuChuli(CDC *pDC);
	void GuanBi();
	void Zuo2134();
	void main(int argc,char *a[]);
	virtual ~CMy213liziView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMy213liziView)
	afx_msg void OnMGuanBi();
	afx_msg void OnMDaKaiWenJian();
	afx_msg void OnMChuanDiCanShu();
	afx_msg void OnMwenjianduihuakuang();
	afx_msg void OnMChuShiLuJing();
	afx_msg void OnMWuMFC();
	afx_msg void OnMYouMFC();
	afx_msg void OnMShuJuStart();
	afx_msg void OnMFenXi();
	afx_msg void OnMXiangYing();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in 213liziView.cpp
inline CMy213liziDoc* CMy213liziView::GetDocument()
   { return (CMy213liziDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_213LIZIVIEW_H__47677082_0618_49E7_A82B_C76D12293855__INCLUDED_)
