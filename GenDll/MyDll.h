#pragma once

#ifdef _MYDLL_EXPORTS
#define MYDLL_API __declspec(dllexport)
#else
#define MYDLL_API __declspec(dllimport)
#endif

//extern "C" MYDLL_API int add(int a, int b);

class MYDLL_API MyDll
{
public:
	int add(int a, int b);
	~MyDll();
};