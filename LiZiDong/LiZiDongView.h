// LiZiDongView.h : interface of the CLiZiDongView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_LIZIDONGVIEW_H__1C42A867_38B9_4EA8_84E7_518E90BE0E72__INCLUDED_)
#define AFX_LIZIDONGVIEW_H__1C42A867_38B9_4EA8_84E7_518E90BE0E72__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "LiZi1.h"


class CLiZiDongView : public CView
{
protected: // create from serialization only
	CLiZiDongView();
	DECLARE_DYNCREATE(CLiZiDongView)

// Attributes
public:
	CLiZiDongDoc* GetDocument();

// Operations
public:
	CLiZi1 m_LiZi;
	int m_QiMou;

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLiZiDongView)
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
	virtual ~CLiZiDongView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CLiZiDongView)
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnMBaoCun();
	afx_msg void OnMXianShi();
	afx_msg void OnMQingKong();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in LiZiDongView.cpp
inline CLiZiDongDoc* CLiZiDongView::GetDocument()
   { return (CLiZiDongDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LIZIDONGVIEW_H__1C42A867_38B9_4EA8_84E7_518E90BE0E72__INCLUDED_)
