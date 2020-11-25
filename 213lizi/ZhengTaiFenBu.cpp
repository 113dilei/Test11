// ZhengTaiFenBu.cpp: implementation of the ZhengTaiFenBu class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "213lizi.h"
#include "ZhengTaiFenBu.h"
#include "math.h"
#define PI 3.14159

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

ZhengTaiFenBu::ZhengTaiFenBu()
{
	m_n = 10000;
	m_YD.x = 400;
	m_YD.y = 600;
	int i;
	for(i=0;i<10000;i++)
		m_s[i]=0;
	QiuShuJu();

}

ZhengTaiFenBu::~ZhengTaiFenBu()
{

}

void ZhengTaiFenBu::Draw(CDC *p)
{
	pDC = p;
    DrawZhengTai();
	DrawZuoBiaoXi();
}

void ZhengTaiFenBu::QiuShuJu()
{
	int i;
	for(i=0;i<m_n;i++)
	{
		m_x1[i] = rand()%m_n;
		m_x1[i] = 1.0*m_x1[i]/m_n;
		m_x2[i] = rand()%m_n;
		m_x2[i] = 1.0*m_x2[i]/m_n;
	}
	for(i=0;i<m_n;i+=2)
	{
		m_y1[i] = sqrt(-2.0*log(m_x1[i]))*cos(2*PI*m_x2[i+1]);
		m_y1[i+1] = sqrt(-2.0*log(m_x1[i]))*sin(2*PI*m_x2[i+1]);

/*		m_y2[i] = sqrt(-2.0*log(m_x2[i]))*cos(2*PI*m_x1[i+1]);
		m_y2[i+1] = sqrt(-2.0*log(m_x2[i]))*sin(2*PI*m_x1[i+1]);*/
	}
	int k;
	for(i=0;i<m_n;i++)
	{
		m_y1[i] +=4;

		if(m_y1[i]<0)//0.1一个区间
			m_y1[i] = 0;
		m_y1[i] *=10;
		k = m_y1[i];
		m_s[k]++;
	}
i=0;
}

void ZhengTaiFenBu::DrawZhengTai()
{
	int i;
	int x,y;
	x = m_YD.x;
	y = m_YD.y - m_s[0];
	pDC->MoveTo(x,y);
	for(i=0;i<150;i++)
	{
		x = m_YD.x +i*5;
		y = m_YD.y -m_s[i];
		pDC->LineTo(x,y);
	}
}

void ZhengTaiFenBu::DrawZuoBiaoXi()
{
	int i,n;
	float x,y,m;
	pDC->MoveTo(m_YD);
	x = m_YD.x;
	y = m_YD.y -500;
	pDC->LineTo(x,y);

	pDC->MoveTo(m_YD);
	x = m_YD.x +500;
	y = m_YD.y;
	pDC->LineTo(x,y);

	CString str;
	m = -4.8;
	for(i=0;i<440;i+=40)
	{
		m += 0.8; 
		x = m_YD.x + i;
		y = m_YD.y + 5;
		str.Format("%.1f",m);
		pDC->TextOut(x,y,str);
	}

	n = 0;
	for(i=0;i<520;i+=50)
	{
		n = i; 
		x = m_YD.x - 30;
		y = m_YD.y - i;
		str.Format("%d",n);
		pDC->TextOut(x,y,str);
	}

	CPen cPen;//声明画笔
	cPen.CreatePen(PS_DASH,1,RGB(100,100,100)) ;
	pDC->SelectObject(&cPen);
	n = 0;
	for(i=50;i<520;i+=50)
	{
		n = i; 
		x = m_YD.x;
		y = m_YD.y - i;
	    pDC->MoveTo(x,y);
		x += 500;
		pDC->LineTo(x,y);
	}
}
