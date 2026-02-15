#include "01-HelloWorld.h"
#include "HelloFrame.h"

bool MyApp::OnInit()
{
    // SetAppearance is a relatively recent feature and may not be available on older
    // distributions.
#if wxCHECK_VERSION(3, 3, 0)
    // Enable dark mode support.
    SetAppearance(Appearance::System);
#endif
    HelloFrame* frame = new HelloFrame();
    frame->Show();
    return true;
}

wxIMPLEMENT_APP(MyApp);
