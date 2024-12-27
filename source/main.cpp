#include "wx/wx.h"

class myApp : public wxApp 
{
    bool OnInit() override
    {
        auto frame = new wxFrame(nullptr, wxID_ANY, "Please work!", wxPoint(100, 100), wxSize(500, 500));
        frame->Show();
        return true;
    }
};

wxIMPLEMENT_APP(myApp);