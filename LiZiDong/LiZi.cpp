// LiZi.cpp: implementation of the CLiZi class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "LiZiDong.h"
#include "LiZi.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CLiZi::CLiZi()
{
	m_nGuiJi = 0;

}

CLiZi::~CLiZi()
{

}

void CLiZi::Draw(CDC *p)
{
	pDC = p;
	DrawQuXian();
	CString str;
	str.Format("×Ü·ÖÊÇ:%d",m_nGuiJi);
	pDC->TextOut(800,200,str);
}

void CLiZi::JiLuZuoBiao(CPoint p)
{
	m_GuiJi[m_nGuiJi][0]=p.x;
	m_GuiJi[m_nGuiJi][1]=p.y;
	m_nGuiJi++;
}

void CLiZi::DrawQuXian()
{
	float x,y;
	int i;
	x = m_GuiJi[0][0];
	y = m_GuiJi[0][1];
	pDC->MoveTo(x,y);
	for(i=0;i<m_nGuiJi;i++)
	{
		x = m_GuiJi[i][0];
		y = m_GuiJi[i][1];
	    pDC->LineTo(x,y);
	}

}
