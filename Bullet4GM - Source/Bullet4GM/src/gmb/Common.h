#pragma once

#ifdef _WIN32
#	define GMEXPORT extern "C" __declspec(dllexport)
#else
#	define GMEXPORT extern "C"
#endif
