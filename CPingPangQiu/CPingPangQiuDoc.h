// CPingPangQiuDoc.h : interface of the CCPingPangQiuDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_CPINGPANGQIUDOC_H__D3015B7C_8071_485E_8EC4_1085DDA9BAA0__INCLUDED_)
#define AFX_CPINGPANGQIUDOC_H__D3015B7C_8071_485E_8EC4_1085DDA9BAA0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CCPingPangQiuDoc : public CDocument
{
protected: // create from serialization only
	CCPingPangQiuDoc();
	DECLARE_DYNCREATE(CCPingPangQiuDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCPingPangQiuDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CCPingPangQiuDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CCPingPangQiuDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CPINGPANGQIUDOC_H__D3015B7C_8071_485E_8EC4_1085DDA9BAA0__INCLUDED_)
