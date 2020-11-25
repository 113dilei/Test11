// 213liziDoc.cpp : implementation of the CMy213liziDoc class
//

#include "stdafx.h"
#include "213lizi.h"

#include "213liziDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMy213liziDoc

IMPLEMENT_DYNCREATE(CMy213liziDoc, CDocument)

BEGIN_MESSAGE_MAP(CMy213liziDoc, CDocument)
	//{{AFX_MSG_MAP(CMy213liziDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMy213liziDoc construction/destruction

CMy213liziDoc::CMy213liziDoc()
{
	// TODO: add one-time construction code here

}

CMy213liziDoc::~CMy213liziDoc()
{
}

BOOL CMy213liziDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMy213liziDoc serialization

void CMy213liziDoc::Serialize(CArchive& ar)
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
// CMy213liziDoc diagnostics

#ifdef _DEBUG
void CMy213liziDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMy213liziDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMy213liziDoc commands
