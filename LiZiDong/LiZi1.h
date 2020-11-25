// LiZi1.h: interface for the CLiZi1 class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_LIZI1_H__55B8A8E5_DFB6_49CB_849C_F70DC841BCB7__INCLUDED_)
#define AFX_LIZI1_H__55B8A8E5_DFB6_49CB_849C_F70DC841BCB7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CLiZi1  
{
public:
	void QingKong();
	void BaoCunDaoTXT();
	void DrawQuXian();
	void JiLuZuoBiao(CPoint p);
	void Draw(CDC *p);
	CLiZi1();
	virtual ~CLiZi1();

	CDC *pDC;
	int m_GuiJi[10000][2];
	int m_nGuiJi;

};

#endif // !defined(AFX_LIZI1_H__55B8A8E5_DFB6_49CB_849C_F70DC841BCB7__INCLUDED_)
