// yanzhengView.h : interface of the CYanzhengView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_YANZHENGVIEW_H__171830C2_B2A0_42A3_82BB_5D05974AE5A2__INCLUDED_)
#define AFX_YANZHENGVIEW_H__171830C2_B2A0_42A3_82BB_5D05974AE5A2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CYanzhengView : public CView
{
protected: // create from serialization only
	CYanzhengView();
	DECLARE_DYNCREATE(CYanzhengView)

// Attributes
public:
	CYanzhengDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CYanzhengView)
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
	virtual ~CYanzhengView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CYanzhengView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in yanzhengView.cpp
inline CYanzhengDoc* CYanzhengView::GetDocument()
   { return (CYanzhengDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_YANZHENGVIEW_H__171830C2_B2A0_42A3_82BB_5D05974AE5A2__INCLUDED_)
