// EXERCISE11.h : main header file for the  EXERCISE11 DLL
//

#pragma once

#ifndef __AFXWIN_H__
#error "include 'pch.h' before including this file for PCH"
#endif
#include "resource.h"		// main symbols
#include <Windows.h>
#include<arxHeaders.h>
#include <dbents.h>

// CEXERCISE11App
// See EXERCISE11.cpp for the implementation of this class
//

class CEXERCISE11App : public CWinApp
{
public:
	CEXERCISE11App();

	// Overrides
public:
	virtual BOOL InitInstance();
	static void commandAndSystemVariable();
	DECLARE_MESSAGE_MAP()
};
