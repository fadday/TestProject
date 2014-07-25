// LearnTemplate_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"

template <class T>

T myAbs(T value)
{
	return (value < 0) ? -value : value;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int i = myAbs(-32);
	int j = myAbs(89);

	std::cout << "If u can read it, the TeamCity work" << std::endl;

	std::cout << "This is a text for complete first task" << std::endl;

	std::cout << i << std::endl;
	std::cout << j << std::endl;

	std::cin >> j;

	return 0;
}

