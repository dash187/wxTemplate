#include "App.hpp"

wxIMPLEMENT_APP(App);

bool App::OnInit()
{
    auto frame = new wxFrame(nullptr, wxID_ANY, "Please work!", wxPoint(100, 100), wxSize(500, 500));
    frame->Show();
    return true;
}