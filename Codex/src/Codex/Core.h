#pragma once

#ifdef CX_PLATFORM_WINDOWS
	#ifdef CX_BUILD_DLL
		#define CODEX_API __declspec(dllexport)
	#else
		#define CODEX_API __declspec(dllimport)
	#endif
#else
	#error Codex only supports Windows!
#endif
