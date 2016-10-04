#pragma once
#define _WIN32_WINNT 0x500
#include <Windows.h>
#include <iostream>
using namespace std;

class Vista {
public:
	Vista();
	~Vista();
	static void resizeConsole();
};

