// yanzhengDoc.cpp : implementation of the CYanzhengDoc class
//

#include "stdafx.h"
#include "yanzheng.h"

#include "yanzhengDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CYanzhengDoc

IMPLEMENT_DYNCREATE(CYanzhengDoc, CDocument)

BEGIN_MESSAGE_MAP(CYanzhengDoc, CDocument)
	//{{AFX_MSG_MAP(CYanzhengDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CYanzhengDoc construction/destruction

CYanzhengDoc::CYanzhengDoc()
{
	// TODO: add one-time construction code here

}

CYanzhengDoc::~CYanzhengDoc()
{
}

BOOL CYanzhengDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CYanzhengDoc serialization

void CYanzhengDoc::Serialize(CArchive& ar)
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
// CYanzhengDoc diagnostics

#ifdef _DEBUG
void CYanzhengDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CYanzhengDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CYanzhengDoc commands
