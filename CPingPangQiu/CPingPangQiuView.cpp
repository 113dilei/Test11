// CPingPangQiuView.cpp : implementation of the CCPingPangQiuView class
//

#include "stdafx.h"
#include "CPingPangQiu.h"

#include "CPingPangQiuDoc.h"
#include "CPingPangQiuView.h"
#include "Dlg_SetShuDu.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCPingPangQiuView

IMPLEMENT_DYNCREATE(CCPingPangQiuView, CView)

BEGIN_MESSAGE_MAP(CCPingPangQiuView, CView)
	//{{AFX_MSG_MAP(CCPingPangQiuView)
	ON_COMMAND(ID_M_Start, OnMStart)
	ON_WM_TIMER()
	ON_WM_ERASEBKGND()
	ON_COMMAND(ID_M_Stop, OnMStop)
	ON_COMMAND(ID_M_ZaiStart, OnMZaiStart)
	ON_COMMAND(ID_M_Init, OnMInit)
	ON_COMMAND(ID_M_ZaiInit, OnMZaiInit)
	ON_COMMAND(ID_M_SetChuShiShuDu, OnMSetChuShiShuDu)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCPingPangQiuView construction/destruction

CCPingPangQiuView::CCPingPangQiuView()
{
	// TODO: add construction code here

	m_t = 0;
	m_xuan = 0;
}

CCPingPangQiuView::~CCPingPangQiuView()
{
}

BOOL CCPingPangQiuView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CCPingPangQiuView drawing

void CCPingPangQiuView::OnDraw(CDC* pDC)
{
	CCPingPangQiuDoc* pDoc = GetDocument();
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

	if(m_xuan == 0)
	m_PPQRun.Draw(&MemDC);
	if(m_xuan == 1)
	m_PPQZaiRun.Draw(&MemDC);

	pDC->BitBlt(0,0,width,height,&MemDC,0,0,SRCCOPY);
	MemBitMap.DeleteObject();
	MemDC.DeleteDC();	
}

/////////////////////////////////////////////////////////////////////////////
// CCPingPangQiuView printing

BOOL CCPingPangQiuView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CCPingPangQiuView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CCPingPangQiuView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CCPingPangQiuView diagnostics

#ifdef _DEBUG
void CCPingPangQiuView::AssertValid() const
{
	CView::AssertValid();
}

void CCPingPangQiuView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCPingPangQiuDoc* CCPingPangQiuView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCPingPangQiuDoc)));
	return (CCPingPangQiuDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CCPingPangQiuView message handlers

void CCPingPangQiuView::OnMStart() 
{
	// TODO: Add your command handler code here
	SetTimer(1,100,NULL);
	m_xuan = 0;
	KillTimer(2);	
	
}

void CCPingPangQiuView::OnTimer(UINT nIDEvent) 
{
	// TODO: Add your message handler code here and/or call default
	if(nIDEvent == 1)
	{
		m_PPQRun.m_t++;
		m_PPQRun.Move(0.01);
		m_PPQRun.PanDuanBianJie();
		if(m_PPQRun.m_x > 2.9)
			KillTimer(1);
	}
	if(nIDEvent == 2)
	{
		m_PPQZaiRun.m_t++;
		if(m_PPQZaiRun.m_t>2)
			KillTimer(2);
	}
	Invalidate(true);
	CView::OnTimer(nIDEvent);
}

BOOL CCPingPangQiuView::OnEraseBkgnd(CDC* pDC) 
{
	// TODO: Add your message handler code here and/or call default
	return true;
	return CView::OnEraseBkgnd(pDC);
}

void CCPingPangQiuView::OnMStop() 
{
	KillTimer(1);	
}

void CCPingPangQiuView::OnMZaiStart() 
{
	// TODO: Add your command handler code here
	m_xuan = 1;
	SetTimer(2,100,NULL);
	KillTimer(1);	
	
}

void CCPingPangQiuView::OnMInit() 
{
	// TODO: Add your command handler code here
	KillTimer(1);	
	m_PPQRun.Init();
	Invalidate(true);
}

void CCPingPangQiuView::OnMZaiInit() 
{
	// TODO: Add your command handler code here
	KillTimer(1);	
	m_PPQZaiRun.Init();
	Invalidate(true);	
}

void CCPingPangQiuView::OnMSetChuShiShuDu() 
{
	// TODO: Add your command handler code here
	CDlg_SetShuDu dlg;
	dlg.m_vx = m_PPQRun.m_vx;
	dlg.m_vy = m_PPQRun.m_vy;

	if(dlg.DoModal() == IDOK)
	{
		m_PPQRun.m_vx = dlg.m_vx;
	    m_PPQRun.m_vy = dlg.m_vy;

		Invalidate(true);
	}
}
