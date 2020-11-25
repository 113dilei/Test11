// PPQYuCe.h: interface for the CPPQYuCe class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_PPQYUCE_H__0AC6E00C_8524_4302_957F_397E38F7DCD7__INCLUDED_)
#define AFX_PPQYUCE_H__0AC6E00C_8524_4302_957F_397E38F7DCD7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "PPQRun.h"

class CPPQYuCe : public CPPQRun  
{
public:
	void Draw(CDC *p);
	CPPQYuCe();
	virtual ~CPPQYuCe();

};

#endif // !defined(AFX_PPQYUCE_H__0AC6E00C_8524_4302_957F_397E38F7DCD7__INCLUDED_)
