// yanzhengView.cpp : implementation of the CYanzhengView class
//

#include "stdafx.h"
#include "yanzheng.h"

#include "yanzhengDoc.h"
#include "yanzhengView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CYanzhengView

IMPLEMENT_DYNCREATE(CYanzhengView, CView)

BEGIN_MESSAGE_MAP(CYanzhengView, CView)
	//{{AFX_MSG_MAP(CYanzhengView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CYanzhengView construction/destruction

CYanzhengView::CYanzhengView()
{
	// TODO: add construction code here

}

CYanzhengView::~CYanzhengView()
{
}

BOOL CYanzhengView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CYanzhengView drawing

void CYanzhengView::OnDraw(CDC* pDC)
{
	CYanzhengDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CYanzhengView printing

BOOL CYanzhengView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CYanzhengView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CYanzhengView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CYanzhengView diagnostics

#ifdef _DEBUG
void CYanzhengView::AssertValid() const
{
	CView::AssertValid();
}

void CYanzhengView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CYanzhengDoc* CYanzhengView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CYanzhengDoc)));
	return (CYanzhengDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CYanzhengView message handlers
