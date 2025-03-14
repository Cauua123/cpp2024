// MathLibrary.h - Contains declarations of math functions
#pragma once
#include <vector>

#ifdef MATHLIB_EXPORTS
#define MATHLIB_API __declspec(dllexport)
#else
#define MATHLIB_API __declspec(dllimport)
#endif



MATHLIB_API float midleArifmetic(std::vector<float> Arr);

MATHLIB_API float mediana(std::vector<float> Arr);

MATHLIB_API float midleQuerty(std::vector<float> Arr);

MATHLIB_API float Dispersion(std::vector<float> Arr);