// LiZiDongView.cpp : implementation of the CLiZiDongView class
//

#include "stdafx.h"
#include "LiZiDong.h"

#include "LiZiDongDoc.h"
#include "LiZiDongView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CLiZiDongView

IMPLEMENT_DYNCREATE(CLiZiDongView, CView)

BEGIN_MESSAGE_MAP(CLiZiDongView, CView)
	//{{AFX_MSG_MAP(CLiZiDongView)
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONDOWN()
	ON_WM_ERASEBKGND()
	ON_COMMAND(ID_M_BaoCun, OnMBaoCun)
	ON_COMMAND(ID_M_XianShi, OnMXianShi)
	ON_COMMAND(ID_M_QingKong, OnMQingKong)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CLiZiDongView construction/destruction

CLiZiDongView::CLiZiDongView()
{
	// TODO: add construction code here
	m_QiMou = 0;
}

CLiZiDongView::~CLiZiDongView()
{
}

BOOL CLiZiDongView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CLiZiDongView drawing

void CLiZiDongView::OnDraw(CDC* pDC)
{
	CLiZiDongDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);


	CDC MemDC;
	int width,height;
	CRect rect;
	CBitmap MemBitMap; 
	GetWindowRect(&rect);
	width = rect.Width();
	height = rect.Height();
	MemDC.CreateCompatibleDC(pDC);
	MemBitMap.CreateCompatibleBitmap(pDC,width,height);
	CBitmap *pOldBitMap = MemDC.SelectObject(&MemBitMap);
	MemDC.FillSolidRect(0,0,width,height,RGB(255,255,255));
	MemDC.SetBkMode(TRANSPARENT);	

	m_LiZi.Draw(&MemDC);

	pDC->BitBlt(0,0,width,height,&MemDC,0,0,SRCCOPY);
	MemBitMap.DeleteObject();
	MemDC.DeleteDC();


	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CLiZiDongView printing

BOOL CLiZiDongView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CLiZiDongView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CLiZiDongView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CLiZiDongView diagnostics

#ifdef _DEBUG
void CLiZiDongView::AssertValid() const
{
	CView::AssertValid();
}

void CLiZiDongView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CLiZiDongDoc* CLiZiDongView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CLiZiDongDoc)));
	return (CLiZiDongDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CLiZiDongView message handlers

void CLiZiDongView::OnMouseMove(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	if(m_QiMou)
	{
		m_LiZi.JiLuZuoBiao(point);
		Invalidate(true);
	}
	CView::OnMouseMove(nFlags, point);
}

void CLiZiDongView::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	m_QiMou = 1-m_QiMou;
	if(m_QiMou)
	{
		m_LiZi.JiLuZuoBiao(point);
		Invalidate(true);
	}
	CView::OnLButtonDown(nFlags, point);
}

BOOL CLiZiDongView::OnEraseBkgnd(CDC* pDC) 
{
	// TODO: Add your message handler code here and/or call default
	return true;
	return CView::OnEraseBkgnd(pDC);
}

void CLiZiDongView::OnMBaoCun() 
{
	// TODO: Add your command handler code here
	m_LiZi.BaoCunDaoTXT();
}

void CLiZiDongView::OnMXianShi() 
{
	// TODO: Add your command handler code here
    WinExec(".\\BeiDiao.exe .\\LiZi.txt",SW_SHOW);
//   WinExec("E:\\Microsoft Visual Studio\\BeiDiao\\Debug\\BeiDiao.exe .\\LiZi.txt",SW_SHOW);
	
}

void CLiZiDongView::OnMQingKong() 
{
	// TODO: Add your command handler code here
	m_LiZi.QingKong();
}
