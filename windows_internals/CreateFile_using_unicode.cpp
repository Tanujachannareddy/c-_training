#include<iostream>
#include<windows.h>
int main() {
	HANDLE  L_HAND = CreateFileA("c:\\users\\tanuj\\unicode.exe", GENERIC_WRITE, 0, nullptr, CREATE_ALWAYS, 0, 0);// file name in Ascii
	HANDLE  L_HAND = CreateFileW(L"c:\\users\\tanuj\\unicode.exe", GENERIC_WRITE, 0, nullptr, CREATE_ALWAYS, 0, 0);// unicode ,supports all laungauges
	HANDLE  L_HAND = CreateFile(L"c:\\users\\tanuj\\unicode.exe", GENERIC_WRITE, 0, nullptr, CREATE_ALWAYS, 0, 0);// using macro
    CloseHandle(L_HAND);
}
