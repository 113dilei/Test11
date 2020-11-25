// PPQRun.h: interface for the CPPQRun class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_PPQRUN_H__E9A0B3CD_6F11_49C9_859C_15C4958EDD41__INCLUDED_)
#define AFX_PPQRUN_H__E9A0B3CD_6F11_49C9_859C_15C4958EDD41__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CPPQRun  
{
public:
	void YuCeZhiTai();
	void WhiteShuJu();
	void Init();
	void DrawYuChe();
	void YuCeQuXian(float dt);
	void DrawQuXian();
	void PanDuanBianJie();
	void DrawQiu();
	void Move(float dt);
	void Draw(CDC *p);
	void DrawQiuZhuo();
	CPPQRun();
	virtual ~CPPQRun();

	CDC *pDC;
	float m_kx,m_ky;
	CPoint m_YD1,m_YD2;
	float m_ZuoL,m_ZuoK,m_ZuoG;

	float m_vx,m_vy,m_v;
	float m_x,m_y;
	float m_ax,m_ay,m_f,m_fx,m_fy,m_s,m_m,m_rho,m_c;
	float m_qiur;
	float m_faqiuy;
	float m_qx[1000][2];
	int m_nqx;

	float m_ycqx[1000][2];
	int m_nycqx;
	float m_yck;

	int m_t;

	float m_fantan[10];
	int m_nfantan;

	float m_ztvx,m_ztvy,m_ztv;
	float m_jiao1,m_jiao2;

};

#endif // !defined(AFX_PPQRUN_H__E9A0B3CD_6F11_49C9_859C_15C4958EDD41__INCLUDED_)
