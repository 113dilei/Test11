// PPQRun.cpp: implementation of the CPPQRun class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "CPingPangQiu.h"
#include "PPQRun.h"
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

CPPQRun::CPPQRun()
{
	m_kx = 100.0/1;
	m_ky = -100.0/1;
	m_YD1.x = 300;
	m_YD1.y = 300;
	m_YD2.x = 300;
	m_YD2.y = 700;
	m_ZuoL = 2.74;
	m_ZuoK = 1.525;
	m_ZuoG = 0.1525;
	m_faqiuy = 2*m_ZuoG;

	m_x = 0;
	m_y = 0;
	m_vx = 8;//8  -3
	m_vy = 2;
	m_v = 0;
	m_ax = 0;
	m_ay = 0;

	m_f = 0;
	m_fx = 0;
	m_fy = 0;

	m_m = 2.7/1000;
	m_qiur = 0.02;
	m_s = PI*m_qiur*m_qiur;
	m_rho = 1.293;
	m_c = 1.0;

	m_nqx = 0;
	m_nycqx = 0;

	m_t = 0;

	m_nfantan = 0;

	m_yck = 0.0;

	m_jiao1 = 0.0;
	m_jiao2 = 0.0;
	m_ztvx = 0.0;
	m_ztvy = 0.0;
	m_ztv = sqrt(m_vx*m_vx+m_vy*m_vy);

}

CPPQRun::~CPPQRun()
{

}

void CPPQRun::Draw(CDC *p)
{
	pDC = p;
	DrawQiuZhuo();
	DrawQiu();
	DrawQuXian();
	if(m_nqx>2)
	{
		YuCeQuXian(0.01);
		DrawYuChe();
	}
	WhiteShuJu();

}


void CPPQRun::WhiteShuJu()
{
	CString str;
    CFont ft;
	ft.CreatePointFont(200,_T("楷体"),NULL);
	pDC->SelectObject(&ft);
	pDC->SetTextColor(RGB(255,0,0));

	str.Format("坐标原点是球桌最左边中点,机器人位置距离原点2.9m");
	pDC->TextOut(500,40,str);
	str.Format("相对于球桌发球高度是%.4f",m_faqiuy);
	pDC->TextOut(700,100,str);
	str.Format("相对于原点x方向位移是:%.4f",m_x);
	pDC->TextOut(700,140,str);
	str.Format("相对于原点y方向位移是:%.4f",m_faqiuy + m_y);
	pDC->TextOut(700,180,str);
	str.Format("实际已用时间:%.4f",m_t*0.01);
	pDC->TextOut(700,220,str);
	str.Format("小球总速度,x方向速度,y方向速度:%.4f,%.4f,%.4f",m_v,m_vx,m_vy);
	pDC->TextOut(700,260,str);

	pDC->SetTextColor(RGB(0,255,0));
	if(m_nqx>2)
	{
		str.Format("机器人预测击球点:%.4f,%.4f",m_ycqx[m_nycqx-1][0],m_ycqx[m_nycqx-1][1]);
		pDC->TextOut(700,350,str);
		str.Format("预测小球最终方向:%.4f",m_yck);
	    pDC->TextOut(700,390,str);
	}
}


void CPPQRun::DrawQiuZhuo()
{
	float x,y;
	pDC->MoveTo(m_YD1);
	x = m_YD1.x + m_ZuoL*m_kx;
	y = m_YD1.y + m_ZuoK*m_ky;
	pDC->Rectangle(m_YD1.x,m_YD1.y,x,y);

	x = m_YD1.x + m_ZuoL*m_kx/2;
	y = m_YD1.y; 
	pDC->MoveTo(x,y);
	y = m_YD1.y + m_ZuoK*m_ky;
	pDC->LineTo(x,y);

	pDC->MoveTo(m_YD2);
	x = m_YD2.x + m_ZuoL*m_kx;
	y = m_YD2.y;
	pDC->LineTo(x,y);
	x = m_YD2.x + m_ZuoL*m_kx/2;
	pDC->MoveTo(x,y);
	y = m_YD2.y + m_ZuoG*m_ky;
	pDC->LineTo(x,y);

}

void CPPQRun::Move(float dt)
{
	m_v = sqrt(m_vx*m_vx + m_vy*m_vy);
	m_f = 0.5*m_c*m_rho*m_s*m_v*m_v;

	m_fx = -m_f*m_vx/m_v;
	m_fy = -m_f*m_vy/m_v;

	m_ax = m_fx/m_m;
	m_ay = m_fy/m_m - 9.8;

    m_vx += m_ax * dt;
    m_vy += m_ay * dt;

	m_x += m_vx * dt;
	m_y += m_vy * dt;

	m_qx[m_nqx][0] = m_x;
	m_qx[m_nqx][1] = m_faqiuy + m_y;
	m_nqx++;

}

void CPPQRun::DrawQiu()
{
	float x,y,r;

	x = m_YD1.x + m_x *m_kx;
	y = m_YD1.y + m_ZuoK/2 *m_ky;
	r = m_qiur*m_kx;
	pDC->Ellipse(x-r,y-r,x+r,y+r);

	x = m_YD2.x + m_qx[m_nqx-1][0]*m_kx;
	y = m_YD2.y + m_qx[m_nqx-1][1]*m_ky;
	pDC->Ellipse(x-r,y-r,x+r,y+r);

}

void CPPQRun::PanDuanBianJie()
{
	if(fabs(-m_y - m_faqiuy) < 0.01)
	{
		m_vy = fabs(m_vy);
		m_fantan[m_nfantan] = m_x;
		m_nfantan++;
	}
}

void CPPQRun::DrawQuXian()
{
	int i;
	float x,y;
	CPen cPen;//声明画笔，边框颜色
	cPen.CreatePen(PS_SOLID,2,RGB(255,0,0));
	pDC->SelectObject(&cPen);

	x = m_YD2.x + m_qx[0][0]*m_kx;
	y = m_YD2.y + m_qx[0][1]*m_ky;
	pDC->MoveTo(x,y);

	for(i=0;i<m_nqx;i++)
	{
		x = m_YD2.x + m_qx[i][0]*m_kx;
		y = m_YD2.y + m_qx[i][1]*m_ky;
		pDC->LineTo(x,y);
	}

}

void CPPQRun::YuCeQuXian(float dt)
{
	float x,y,x1,y1,x2,y2,x3,y3;
	int i,k;
	k = 0;

	x1 = m_qx[m_nqx-1][0];
	y1 = m_qx[m_nqx-1][1];
	x2 = m_qx[(m_nqx-1)/2][0];
	y2 = m_qx[(m_nqx-1)/2][1];
	x3 = m_qx[0][0];
	y3 = m_qx[0][1];

	if(m_nfantan == 1)
	{
		if(x1 > m_fantan[0])
			y1 = -y1;
		if(x2 > m_fantan[0])
			y2 = -y2;
	}

    if(m_nfantan == 2)
	{
		if(x1 > m_fantan[0] && x1 < m_fantan[1])
			y1 = -y1;
		if(x2 > m_fantan[0] && x2 < m_fantan[1])
			y2 = -y2;
	}


	if(x1 == x2)
		x2+=0.1;
	if(x1 == x3)
		x3+=0.1;
	if(x2 == x3)
		x3+=0.1;

	for(i = 0;i<30;i++)
	{
		x = 0.1*i;
		y = (x-x2)*(x-x3)/((x1-x2)*(x1-x3))*y1+(x-x1)*(x-x3)/((x2-x1)*(x2-x3))*y2\
			+(x-x1)*(x-x2)/((x3-x1)*(x3-x2))*y3;

		y = fabs(y);
		m_ycqx[i][0] = x; 
		m_ycqx[i][1] = y;
	}

	x = 2.9;
	m_yck = (x-x3)/((x1-x2)*(x1-x3))*y1+(x-x3)/((x2-x1)*(x2-x3))*y2\
			+(x-x2)/((x3-x1)*(x3-x2))*y3 +\
			(x-x2)/((x1-x2)*(x1-x3))*y1+(x-x1)/((x2-x1)*(x2-x3))*y2\
			+(x-x1)/((x3-x1)*(x3-x2))*y3;
	m_yck = fabs(m_yck);

	m_nycqx = i;
}

void CPPQRun::DrawYuChe()
{
	float x,y,x1,y1,x2,y2,x3,y3;
	int i;

	CPen cPen;//声明画笔，边框颜色
	cPen.CreatePen(PS_SOLID,2,RGB(0,255,0));
	pDC->SelectObject(&cPen);

	x = m_YD2.x + m_ycqx[0][0]*m_kx;
	y = m_YD2.y + m_ycqx[0][1]*m_ky;
	pDC->MoveTo(x,y);

	for(i = 0;i<m_nycqx;i++)
	{
		x = m_YD2.x + m_ycqx[i][0]*m_kx;
		y = m_YD2.y + m_ycqx[i][1]*m_ky;
		pDC->LineTo(x,y);
	}
}
 

void CPPQRun::Init()
{
	m_x = 0;
	m_y = 0;
	m_vx = 8;//8  -3
	m_vy = -3;
	m_v = 0;
	m_ax = 0;
	m_ay = 0;

	m_f = 0;
	m_fx = 0;
	m_fy = 0;

	m_m = 2.7/1000;
	m_qiur = 0.04;
	m_s = PI*m_qiur*m_qiur;
	m_rho = 0.1;
	m_c = 2;

	m_nqx = 0;
	m_nycqx = 0;

	m_t = 0;

	m_nfantan = 0;

	m_yck = 0.0;

	m_jiao1 = 0.0;
	m_jiao2 = 0.0;
	m_ztvx = 0.0;
	m_ztvy = 0.0;
}


void CPPQRun::YuCeZhiTai()
{
/*	float vx,vy,x,y,jiao,t;
	int i;
	for(i=0;i<180;i++)
	{
		jiao = fabs(atan(m_yck)-i);
		vx = m_ztv*sin(jiao);
		vx = -vx;
		vy = m_ztv*cos(jiao);
		if(vx<0)
		{

		}
	}*/
}
