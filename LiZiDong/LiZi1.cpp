// LiZi1.cpp: implementation of the CLiZi1 class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "LiZi1.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CLiZi1::CLiZi1()
{
	m_nGuiJi = 0;

}

CLiZi1::~CLiZi1()
{

}

void CLiZi1::Draw(CDC *p)
{
	pDC = p;
	DrawQuXian();
	CString str;
	str.Format("×Ü·ÖÊÇ:%d",m_nGuiJi);
	pDC->TextOut(800,200,str);
}

void CLiZi1::JiLuZuoBiao(CPoint p)
{
	m_GuiJi[m_nGuiJi][0]=p.x;
	m_GuiJi[m_nGuiJi][1]=p.y;
	m_nGuiJi++;
}

void CLiZi1::DrawQuXian()
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

void CLiZi1::BaoCunDaoTXT()
{
	int i;
	CString str;
	CStdioFile f;
	f.Open(".\\LiZi.txt",CFile::modeWrite);
	for(i=0;i<m_nGuiJi;i++)
	{
		str.Format("(%d,%d) ",m_GuiJi[i][0],m_GuiJi[i][1]);
		f.WriteString(str);
	}
}

void CLiZi1::QingKong()
{
	::DeleteFile(".\\LiZi.txt");
	::CopyFile(".\\Kong.txt",".\\LifZi.txt",false);
	m_nGuiJi = 0;
}
