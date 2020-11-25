// LiZiDongDoc.cpp : implementation of the CLiZiDongDoc class
//

#include "stdafx.h"
#include "LiZiDong.h"

#include "LiZiDongDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CLiZiDongDoc

IMPLEMENT_DYNCREATE(CLiZiDongDoc, CDocument)

BEGIN_MESSAGE_MAP(CLiZiDongDoc, CDocument)
	//{{AFX_MSG_MAP(CLiZiDongDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CLiZiDongDoc construction/destruction

CLiZiDongDoc::CLiZiDongDoc()
{
	// TODO: add one-time construction code here

}

CLiZiDongDoc::~CLiZiDongDoc()
{
}

BOOL CLiZiDongDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CLiZiDongDoc serialization

void CLiZiDongDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CLiZiDongDoc diagnostics

#ifdef _DEBUG
void CLiZiDongDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CLiZiDongDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CLiZiDongDoc commands
