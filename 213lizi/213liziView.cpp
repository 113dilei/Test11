// 213liziView.cpp : implementation of the CMy213liziView class
//

#include "stdafx.h"
#include "213lizi.h"

#include "213liziDoc.h"
#include "213liziView.h"   
#include "windows.h"
#include "tlhelp32.h"
#include "Dlg_DiaoYong.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMy213liziView

IMPLEMENT_DYNCREATE(CMy213liziView, CView)

BEGIN_MESSAGE_MAP(CMy213liziView, CView)
	//{{AFX_MSG_MAP(CMy213liziView)
	ON_COMMAND(ID_M_GuanBi, OnMGuanBi)
	ON_COMMAND(ID_M_DaKaiWenJian, OnMDaKaiWenJian)
	ON_COMMAND(ID_M_ChuanDiCanShu, OnMChuanDiCanShu)
	ON_COMMAND(ID_M_wenjianduihuakuang, OnMwenjianduihuakuang)
	ON_COMMAND(ID_M_ChuShiLuJing, OnMChuShiLuJing)
	ON_COMMAND(ID_M_WuMFC, OnMWuMFC)
	ON_COMMAND(ID_M_YouMFC, OnMYouMFC)
	ON_COMMAND(ID_M_ShuJu_Start, OnMShuJuStart)
	ON_COMMAND(ID_M_FenXi, OnMFenXi)
	ON_COMMAND(ID_M_XiangYing, OnMXiangYing)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMy213liziView construction/destruction

CMy213liziView::CMy213liziView()
{
	// TODO: add construction code here
	m_shujuchuli = 0;
	m_fenxi = 0;
}

CMy213liziView::~CMy213liziView()
{
}

BOOL CMy213liziView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMy213liziView drawing

void CMy213liziView::OnDraw(CDC* pDC)
{
	CMy213liziDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	if(m_shujuchuli == 1)
		ShuJuChuli(pDC);
	if(m_fenxi == 1)
		FenXI(pDC);

	m_ztfb.Draw(pDC);
//	AfxGetMainWnd()->CWnd::SetWindowText("aaa");

/*	int *a3;
	int b3[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	a3 = &b3[0][0];
//	a3[0]=3;

	CString str;
    str.Format("数值是:%d",a3[0]);
	pDC->TextOut(200,220,str);*/
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CMy213liziView printing

BOOL CMy213liziView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMy213liziView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMy213liziView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMy213liziView diagnostics

#ifdef _DEBUG
void CMy213liziView::AssertValid() const
{
	CView::AssertValid();
}

void CMy213liziView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy213liziDoc* CMy213liziView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy213liziDoc)));
	return (CMy213liziDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMy213liziView message handlers

void CMy213liziView::main(int argc, char *a[])
{
/*	int i;
	for(i=0;i<argc;i++)
		printf("%s\n",a[i]);*/
	int i,j,k;
	int dim =3;
	float *temp= new float[3];
	for(i=0;i<3;i++)
	{
		temp[i]=i;
	}
	float a1[3];
	a1[1]=temp[2];
	delete []temp;

	int **N2=new int *[dim];
	for(i=0;i<dim;i++)
	{
		N2[i]=new int [dim];
	}
	int **b2;
	b2 = N2;
	for(i=0;i<dim;i++)
	{
		delete []N2[i];
	}
	delete []N2;
}

void CMy213liziView::Zuo2134()
{
	CString m_FileName;
	CFileDialog dlg(true);
//	CFileDialog dlg(true,0,0,OFN_HIDEREADONLY  | OFN_OVERWRITEPROMPT,_T("(*.*)|*.*|(*.mjt)|*.mjt|(*.jou)|*.jou||"));
	if(dlg.DoModal() == IDOK)
	{
		m_FileName = dlg.GetPathName();
		AfxMessageBox(m_FileName);
		m_FileName = dlg.GetFileName();
		AfxMessageBox(m_FileName);
		m_FileName = dlg.GetFileExt();
		AfxMessageBox(m_FileName);
	}

}

void CMy213liziView::GuanBi()
{

    PROCESSENTRY32 pe32;
	HANDLE hProcess,hPrecessShotSnap;
	DWORD dwProcessId =NULL;
	CString str;
	BOOL bv;
	pe32.dwSize = sizeof(pe32);
	hPrecessShotSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS,0);
	if(hPrecessShotSnap == INVALID_HANDLE_VALUE)
	{	AfxMessageBox("获取进程快照失败！");
	CloseHandle(hPrecessShotSnap);
	return;
	}
	bv = Process32First(hPrecessShotSnap,&pe32);
	while(bv)
	{	str = pe32.szExeFile;
	if(str.CompareNoCase("213lizi.exe") ==0 )
	{
		dwProcessId = pe32.th32ProcessID;
		break;
	}
	bv = Process32Next(hPrecessShotSnap,&pe32);
	}
	if (dwProcessId != NULL)
	{
		hProcess = OpenProcess(PROCESS_ALL_ACCESS,false,dwProcessId);
		::TerminateProcess(hProcess,0);
	}
	CloseHandle(hPrecessShotSnap);
	CloseHandle(hProcess);
}

void CMy213liziView::OnMGuanBi() 
{
	// TODO: Add your command handler code here
	GuanBi();
}

void CMy213liziView::OnMDaKaiWenJian() 
{
	// TODO: Add your command handler code here
    ShellExecute(NULL,"open",".\\a.txt",NULL,NULL,SW_SHOWNORMAL);	
}

void CMy213liziView::OnMChuanDiCanShu() 
{
	// TODO: Add your command handler code here
	//	WinExec(".\\213lizi3.exe a.txt",SW_SHOW);
    WinExec(".\\213lizi3.exe aaa sss",SW_SHOW);
}

void CMy213liziView::OnMwenjianduihuakuang() 
{
	// TODO: Add your command handler code here
	Zuo2134();
}

void CMy213liziView::OnMChuShiLuJing() 
{
	// TODO: Add your command handler code here
	::SetCurrentDirectory(::ex_AppPath);
	AfxMessageBox(ex_AppPath);
}

void CMy213liziView::OnMWuMFC() 
{
	// TODO: Add your command handler code here
	CDlg_DiaoYong dlg;
	dlg.DoModal() == IDOK;
}

void CMy213liziView::OnMYouMFC() 
{
	// TODO: Add your command handler code here
    WinExec("E:\\Microsoft Visual Studio\\BeiDiao\\Debug\\BeiDiao.exe .\\a.txt",SW_SHOW);
	
}

void CMy213liziView::OnMShuJuStart() 
{
	// TODO: Add your command handler code here
	m_shujuchuli = 1-m_shujuchuli;
	Invalidate(true);
}

void CMy213liziView::ShuJuChuli(CDC *pDC)
{
	CString str1;
	char s[10];
	sprintf(s,"%d",123);
	str1.Format("数值是:%s",s);
	pDC->TextOut(200,200,str1);

	int a,b;
	float fa,fb;
	CString str = "123 456";
	sscanf("123 456","%d %d",&a,&b);
	str1.Format("数值是:%s",s);
	pDC->TextOut(200,220,str1);

	sscanf(str,"%d %d",&a,&b);
	str1.Format("数值是:%d,%d",a,b);
	pDC->TextOut(200,240,str1);

	str="123";
	sscanf(str,"%d",&a);
	str1.Format("数值是:%d",a);
	pDC->TextOut(200,260,str1);

	str="7.564e-09,3";
	sscanf(str,"%f %f",&fa,&fb);
	str1.Format("数值是:%s",s);
	pDC->TextOut(200,280,str1);


	a = 5;
	float b1;
	char c[30]="1.2";
	char t[30]="34";
	char *p;
	b1 = atof(c);
	a = atoi(t);
	p = itoa(207,c,2);
	str1.Format("数值是:%d,%.2f,%s",a,b1,c);
	pDC->TextOut(200,300,str1);
}

void CMy213liziView::OnMFenXi() 
{
	// TODO: Add your command handler code here
	m_fenxi = 1-m_fenxi;
	Invalidate(true);
}

void CMy213liziView::FenXI(CDC *pDC)
{
	CString str = "S13C31.4043389N1183.98103E";
	double nd,jd,wd;
	CString s;
	int n;
	n = str.Find('S');
	if(n==0)
	{
		str.Delete(0,n+1);
		n = str.Find('C');
		s = str.Left(n);
		nd = atof(s);
		str.Delete(0,n+1);

		n = str.Find('N');
		s = str.Left(n);
		jd = atof(s);
		str.Delete(0,n+1);

		n = str.Find('E');
		s = str.Left(n);
		wd = atof(s);
		str.Delete(0,n+1);
	}
	else
		AfxMessageBox("数据错误!");

	str.Format("浓度，经度，纬度是:%.2f,%f,%f",nd,jd,wd);
	pDC->TextOut(200,300,str);
}

void CMy213liziView::OnMXiangYing() 
{
	// TODO: Add your command handler code here
	AfxGetMainWnd()->CWnd::SetWindowText("aaa");
	
}


