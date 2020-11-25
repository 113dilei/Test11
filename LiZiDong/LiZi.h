// LiZi.h: interface for the CLiZi class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_LIZI_H__74579C96_5ECF_4F0B_806B_63C9657BBE66__INCLUDED_)
#define AFX_LIZI_H__74579C96_5ECF_4F0B_806B_63C9657BBE66__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CLiZi  
{
public:
	void DrawQuXian();
	void JiLuZuoBiao(CPoint p);
	void Draw(CDC *p);
	CLiZi();
	virtual ~CLiZi();

	CDC *pDC;
	int m_GuiJi[10000][2];
	int m_nGuiJi;

};

#endif // !defined(AFX_LIZI_H__74579C96_5ECF_4F0B_806B_63C9657BBE66__INCLUDED_)
