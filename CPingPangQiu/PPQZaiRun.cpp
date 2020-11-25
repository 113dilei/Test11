// PPQZaiRun.cpp: implementation of the CPPQZaiRun class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "CPingPangQiu.h"
#include "PPQZaiRun.h"
#include "math.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CPPQZaiRun::CPPQZaiRun()
{
	JiSuanLuJIng();
	m_tempt = 0;
	m_tempt = m_nqx;

}

CPPQZaiRun::~CPPQZaiRun()
{

}

void CPPQZaiRun::Draw(CDC *p)
{
	pDC = p;
	m_nqx = m_tempt;
	DrawQiuZhuo();
	DrawQuXian();
	if(m_t>2)
	{
		m_nqx = m_t; 
		YuCeQuXian(0.01);
		DrawYuChe();
	}
	DrawQiu();
	WhiteShuJu();

/*	CString str;
    CFont ft;
	ft.CreatePointFont(200,_T("楷体"),NULL);
	pDC->SelectObject(&ft);
	pDC->SetTextColor(RGB(255,0,0));
	str.Format("小球实际位移点:%f,%f",m_qx[m_i][0],m_qx[m_i][1]);
	pDC->TextOut(700,400,str);*/
}

void CPPQZaiRun::JiSuanLuJIng()
{
	int i;
	float dt;
	dt = 0.01;
	for(i=0;i<80;i++)
	{
		Move(dt);
        PanDuanBianJie();
	}
}


