// Dlg_DiaoYong.cpp : implementation file
//

#include "stdafx.h"
#include "213lizi.h"
#include "Dlg_DiaoYong.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDlg_DiaoYong dialog


CDlg_DiaoYong::CDlg_DiaoYong(CWnd* pParent /*=NULL*/)
	: CDialog(CDlg_DiaoYong::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDlg_DiaoYong)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CDlg_DiaoYong::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDlg_DiaoYong)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDlg_DiaoYong, CDialog)
	//{{AFX_MSG_MAP(CDlg_DiaoYong)
//	ON_BN_CLICKED(IDC_BeiDiaoexe, OnBeiDiaoexe)
	ON_BN_CLICKED(IDC_DiaoYong, OnDiaoYong)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDlg_DiaoYong message handlers

void CDlg_DiaoYong::OnBeiDiaoexe() 
{
	// TODO: Add your control notification handler code here
	
}

void CDlg_DiaoYong::OnDiaoYong() 
{
	// TODO: Add your control notification handler code here
	 WinExec(".\\213lizi3.exe aaa sss",SW_SHOW);

}
