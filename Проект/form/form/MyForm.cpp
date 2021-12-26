#include "MyForm.h"
#include "Windows.h"

using namespace form;

[STAThread]

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
    STARTUPINFO si = { sizeof(si) };
    PROCESS_INFORMATION pi;
    TCHAR p[] = TEXT("notepad.exe");
    CreateProcess(NULL, p, NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi);

    STARTUPINFO si2 = { sizeof(si) };
    PROCESS_INFORMATION pi2;
    TCHAR p2[] = TEXT("notepad.exe");
    CreateProcess(NULL, p2, NULL, NULL, FALSE, 0, NULL, NULL, &si2, &pi2);
	Application::Run(gcnew MyForm);
	return 0;
}