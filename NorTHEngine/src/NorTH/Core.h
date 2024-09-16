#pragma once

#ifdef NORTH_PLATFORM_WINDOWS
	#ifdef NORTH_BUILD_DLL
		#define NORTH_API __declspec(dllexport)	
	#else
		#define NORTH_API __declspec(dllimport)	
	#endif
#else 
	#error NorTH only support Windows!
#endif