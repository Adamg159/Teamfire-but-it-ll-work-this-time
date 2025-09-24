#pragma once
#include "Frame.h"
#include <wx/wx.h>

class Frame;

class App : public wxApp
{

	Frame* Window = nullptr;

public:
	bool OnInit();
	
};

