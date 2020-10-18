
#include "hpl.h"

#include "CommunityEdition.h"

#ifdef WIN32
#include <windows.h>
#include <shellapi.h>
#endif

void OpenURL(const char* url)
{
#if defined(WIN32)
	HINSTANCE result = ShellExecuteA(NULL, NULL, url, NULL, NULL, SW_SHOWNORMAL);
	if ((int)result == SE_ERR_ACCESSDENIED)
        result = ShellExecuteA(NULL, "runas", url, NULL, NULL, SW_SHOWNORMAL);
#elif defined(__linux__)
	std::string cmd = "xdg-open ";
	cmd += std::string{url};
	system(cmd.c_str());
#elif defined(__APPLE__)
	std::string cmd = "open ";
	cmd += std::string{url};
	system(cmd.c_str());
#endif
}
