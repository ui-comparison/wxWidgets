#pragma once

#include <wx/wx.h>

class HelloFrame : public wxFrame
{
public:
    HelloFrame();

private:
    wxStaticText* textOutput;
    wxTextCtrl* textInput;

	void UpdateTextOutput();
	void OnTextInput(wxCommandEvent& event);
	void OnQuitBtn(wxCommandEvent& event);
};