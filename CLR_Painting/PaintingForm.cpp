#include "PaintingForm.h"
#include <Windows.h>

using namespace CLRPainting;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew PaintingForm);
}