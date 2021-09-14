#include <iostream>
#include<windows.h>

int main() {
	PROCESS_INFORMATION pi;
	STARTUPINFO si = { sizeof(si) };
	TCHAR name[] = (L"notepad");
	BOOL success = CreateProcess(nullptr, name,nullptr,nullptr,FALSE,0,nullptr,nullptr,&si,&pi);
	if (success){
		std::cout << "PID: " << pi.dwProcessId << "\t"<< "handle: "<<pi.hProcess<<std::endl;
		WaitForSingleObject(pi.hProcess, INFINITE);
		DWORD code;
		GetExitCodeProcess(pi.hProcess, &code);
		std::cout << "notepad has terminated and exit code was : " << code << std::endl;
	}
	else {
		std::cout << "failed to create process" << std::endl;
	}
}
	
