
// EquipmentWork.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols
#include<string>
using namespace std;
// CEquipmentWorkApp:
// See EquipmentWork.cpp for the implementation of this class
//

class CEquipmentWorkApp : public CWinApp
{
public:
	CEquipmentWorkApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation
	string MakeDate();
	string MakeTime();
	void DisplaySpecs();
	void Header();
	void GetInfo();
	void Changemenu();
	void DoChangemenu();
	void UtilitiesMenu();
	void DoUtilitiesMenu();
	void OpeningMenu();
	DECLARE_MESSAGE_MAP()
};

extern CEquipmentWorkApp theApp;