// yanzhengDoc.h : interface of the CYanzhengDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_YANZHENGDOC_H__B87E9F3B_EFFA_4B61_911C_B5B42262B762__INCLUDED_)
#define AFX_YANZHENGDOC_H__B87E9F3B_EFFA_4B61_911C_B5B42262B762__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CYanzhengDoc : public CDocument
{
protected: // create from serialization only
	CYanzhengDoc();
	DECLARE_DYNCREATE(CYanzhengDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CYanzhengDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CYanzhengDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CYanzhengDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_YANZHENGDOC_H__B87E9F3B_EFFA_4B61_911C_B5B42262B762__INCLUDED_)
