#include <windows.h>
#include <time.h>

DWORD WINAPI Thread(LPVOID lpParamete)
{
	time_t W=time(NULL);
	while (W-time(NULL)<60)
	{
		POINT pt;
		GetCursorPos(&pt);
		HWND hwd=WindowFromPoint(pt);
		ShowWindow(hwd,SW_MINIMIZE);
		Sleep(1);
	}
	return GetLastError();
}


int main(int argc,LPCSTR * argv)
{
	HANDLE hdThread=CreateThread(NULL,0,(LPTHREAD_START_ROUTINE)Thread,NULL,0,NULL);
	WaitForSingleObject(hdThread,INFINITE);
	CloseHandle(hdThread);
	return 0;
}

