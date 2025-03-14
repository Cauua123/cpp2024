// MathClient.cpp : Client app for MathLibrary DLL.
// #include "pch.h" Uncomment for Visual Studio 2017 and earlier
#include <iostream>
#include "MathLib.h"

int main()
{
	std::cout << midleArifmetic({ 2,3,45,324,4 }) << std::endl;
	std::cout << mediana({ 2,3,45,324,4 }) << std::endl;
	std::cout << midleQuerty({ 2,3,45,324,4 }) << std::endl;
	std::cout << Dispersion({ 2,3,45,324,4 }) << std::endl;
}