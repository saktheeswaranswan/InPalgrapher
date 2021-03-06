/*
Copyright (c) 2017 InversePalindrome
InPal - MainPanel.hpp
InversePalindrome.com
*/


#pragma once

#include "MathData.hpp"

#include <wx/panel.h>
#include <wx/button.h>
#include <wx/textctrl.h>


class CalculatorPanel : public wxPanel
{
public:
    CalculatorPanel(wxWindow* parent, MathDataDefault* mathData);

private:
    MathDataDefault* mathData;

    wxTextCtrl* taskEntry;
    wxTextCtrl* taskSolution;
    wxButton* solveButton;
    wxButton* clearButton;

    void OnSolveTask(wxMouseEvent& event);
    void OnClearTask(wxMouseEvent& event);
};