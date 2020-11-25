// PPQZaiRun.h: interface for the CPPQZaiRun class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_PPQZAIRUN_H__4C607273_CA73_45C2_A93F_E3BC01ED1447__INCLUDED_)
#define AFX_PPQZAIRUN_H__4C607273_CA73_45C2_A93F_E3BC01ED1447__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "PPQRun.h"

class CPPQZaiRun : public CPPQRun  
{
public:
	void JiSuanLuJIng();
	void Draw(CDC *p);
	CPPQZaiRun();
	virtual ~CPPQZaiRun();

	int m_tempt;

};

#endif // !defined(AFX_PPQZAIRUN_H__4C607273_CA73_45C2_A93F_E3BC01ED1447__INCLUDED_)
