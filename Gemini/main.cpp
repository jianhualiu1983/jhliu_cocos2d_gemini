#include "main.h"
#include "AppDelegate.h"
#include "CCEGLView.h"

using namespace cocos2d;

int APIENTRY _tWinMain(HINSTANCE hInstance,
                       HINSTANCE hPrevInstance,
                       LPTSTR    lpCmdLine,
                       int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);

    // create the application instance
    AppDelegate app;
    EGLView eglView;
    eglView.init("Gemini",900,640);
    return Application::getInstance()->run();
}
