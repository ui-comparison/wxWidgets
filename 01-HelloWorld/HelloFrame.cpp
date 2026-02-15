#include "HelloFrame.h"

enum
{
    ID_Output = 1,
	ID_Input = 2
};

HelloFrame::HelloFrame()
    : wxFrame(nullptr, wxID_ANY, "Hello World")
{
    // This panel is required between the frame and the controls for tab navigation to work.
    wxPanel* panel = new wxPanel(this, wxID_ANY);
    
	// Create the text output and input controls
    textOutput = new wxStaticText(panel, ID_Output, "");
	textInput = new wxTextCtrl(panel, ID_Input, "World");
	textInput->Bind(wxEVT_TEXT, &HelloFrame::OnTextInput, this);

	wxButton* quitBtn = new wxButton(panel, wxID_ANY, "Quit");
	quitBtn->Bind(wxEVT_BUTTON, &HelloFrame::OnQuitBtn, this);

    wxBoxSizer* sizer = new wxBoxSizer(wxVERTICAL);
    sizer->Add(textOutput, 1, wxEXPAND | wxALL, 8);
    sizer->Add(textInput, 0, wxEXPAND | wxLEFT | wxRIGHT | wxBOTTOM, 8);
    sizer->Add(quitBtn, 0, wxEXPAND | wxLEFT | wxRIGHT | wxBOTTOM, 8);
    panel->SetSizer(sizer);

	wxBoxSizer* frameSizer = new wxBoxSizer(wxVERTICAL);
	frameSizer->Add(panel, 1, wxEXPAND, 0);
	SetSizer(frameSizer);

	UpdateTextOutput();
}

void HelloFrame::UpdateTextOutput()
{
    textOutput->SetLabel(L"Hello " + textInput->GetValue() + L"!");
}

void HelloFrame::OnTextInput(wxCommandEvent& event)
{
    UpdateTextOutput();
}

void HelloFrame::OnQuitBtn(wxCommandEvent& event)
{
    Close();
}
