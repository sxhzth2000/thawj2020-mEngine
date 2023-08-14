#pragma once
#ifdef ME_PLATFORM_WINDOWS
	#ifdef ME_BUILD_DLL
		#define MENGINE_API __declspec(dllexport)
	#else
		#define MENGINE_API __declspec(dllimport)
	#endif // ME_BUILD_DLL
#else
#error  mEngine only support windows!
#endif // ME_PLATFORM_WINDOWS
