#include "KinoMain.h"
#include <Windows.h>

using namespace Kino;

[STAThreadAttribute]
int WINAPI WinMain(_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPSTR lpCmdLine,
	_In_ int nShowCmd)
{
	Application::Run(gcnew KinoMain);
}

