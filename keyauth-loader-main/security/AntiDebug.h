#include "../core/encryption/xorstr.hpp"
#include <atlbase.h>
#include <clocale>
#include <TlHelp32.h>

namespace AntiDebug
{
	void EndTask() {
		system(XorStr("taskkill /f /im HTTPDebuggerUI.exe >nul 2>&1").c_str());
		system(XorStr("taskkill /f /im HTTPDebuggerSvc.exe >nul 2>&1").c_str());
		system(XorStr("sc stop HTTPDebuggerPro >nul 2>&1").c_str());
		system(XorStr("taskkill /FI \"IMAGENAME eq cheatengine*\" /IM * /F /T >nul 2>&1").c_str());
		system(XorStr("taskkill /FI \"IMAGENAME eq httpdebugger*\" /IM * /F /T >nul 2>&1").c_str());
		system(XorStr("taskkill /FI \"IMAGENAME eq processhacker*\" /IM * /F /T >nul 2>&1").c_str());
		system(XorStr("taskkill /FI \"IMAGENAME eq x64dbg*\" /IM * /F /T >nul 2>&1").c_str());
		system(XorStr("taskkill /FI \"IMAGENAME eq x32dbg*\" /IM * /F /T >nul 2>&1").c_str());
		system(XorStr("taskkill /FI \"IMAGENAME eq ollydbg*\" /IM * /F /T >nul 2>&1").c_str());
		system(XorStr("taskkill /FI \"IMAGENAME eq fiddler*\" /IM * /F /T >nul 2>&1").c_str());
	}
}