#pragma once
#include <iostream>
#include <wx/wx.h>
#include "wx/event.h"
#include "wx/sizer.h"

using namespace std;

class Frame : public wxWindow
{

private:
	wxBoxSizer* FrameSizer;
	wxTextCtrl* FrameText;


public:
	Frame();
	wxDECLARE_EVENT_TABLE();

};

