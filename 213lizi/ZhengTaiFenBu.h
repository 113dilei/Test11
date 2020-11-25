// ZhengTaiFenBu.h: interface for the ZhengTaiFenBu class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_ZHENGTAIFENBU_H__C276782A_5381_432C_BB1A_65A648628FA2__INCLUDED_)
#define AFX_ZHENGTAIFENBU_H__C276782A_5381_432C_BB1A_65A648628FA2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class ZhengTaiFenBu  
{
public:
	void DrawZuoBiaoXi();
	void DrawZhengTai();
	void QiuShuJu();
	void Draw(CDC *p);
	ZhengTaiFenBu();
	virtual ~ZhengTaiFenBu();
	CDC *pDC;

	float m_x1[10000],m_x2[10000],m_y1[10000],m_y2[10000],m_s[10000];
	int m_n;
	CPoint m_YD;
};

#endif // !defined(AFX_ZHENGTAIFENBU_H__C276782A_5381_432C_BB1A_65A648628FA2__INCLUDED_)
