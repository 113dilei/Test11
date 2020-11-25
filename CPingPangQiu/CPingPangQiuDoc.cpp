// CPingPangQiuDoc.cpp : implementation of the CCPingPangQiuDoc class
//

#include "stdafx.h"
#include "CPingPangQiu.h"

#include "CPingPangQiuDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCPingPangQiuDoc

IMPLEMENT_DYNCREATE(CCPingPangQiuDoc, CDocument)

BEGIN_MESSAGE_MAP(CCPingPangQiuDoc, CDocument)
	//{{AFX_MSG_MAP(CCPingPangQiuDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCPingPangQiuDoc construction/destruction

CCPingPangQiuDoc::CCPingPangQiuDoc()
{
	// TODO: add one-time construction code here

}

CCPingPangQiuDoc::~CCPingPangQiuDoc()
{
}

BOOL CCPingPangQiuDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CCPingPangQiuDoc serialization

void CCPingPangQiuDoc::Serialize(CArchive& ar)
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
// CCPingPangQiuDoc diagnostics

#ifdef _DEBUG
void CCPingPangQiuDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CCPingPangQiuDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CCPingPangQiuDoc commands
