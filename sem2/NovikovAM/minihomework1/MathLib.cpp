#include "pch.h" 
#include <utility>
#include <limits.h>
#include "MathLib.h"
#include <cmath>
#include <vector>



MATHLIB_API float midleArifmetic(std::vector<float> Arr) {
	int Arrsize = Arr.size();
	float SumArr = 0;
	float Aplay = 0;

	for (int i = 0; i < Arrsize; i++) {
		SumArr += Arr[i];
	}

	Aplay = SumArr / Arrsize;
	return Aplay;
}

MATHLIB_API float mediana(std::vector<float> Arr) {
	bool YesNoEvenNum{};
	int Arrsize = Arr.size();

	if (Arrsize % 2 == 0) {
		YesNoEvenNum = true;
	}
	else {
		YesNoEvenNum = false;
	}

	if (YesNoEvenNum) {
		int dir = Arrsize / 2;
		std::vector<float> Arr1;
		Arr1.push_back(Arr[dir]);
		Arr1.push_back(Arr[dir+1]);
		return midleArifmetic(Arr1);
	}
	else {
		int dir = (Arrsize / 2);
		return Arr[dir];
	}
}

MATHLIB_API float midleQuerty(std::vector<float> Arr) {
	float sumArr{};

	for (int i = 0; i < Arr.size(); i++) {
		sumArr += pow(Arr[i], 2);
	}
	return sqrt(sumArr/Arr.size());
}

MATHLIB_API float Dispersion(std::vector<float> Arr) {
	std::vector<float> SqExc;
	float sumArrSqExc{};
	float midAref = midleArifmetic(Arr);
	for (int i = 0; i < Arr.size();i++) {
		SqExc.push_back(pow(Arr[i] - midAref, 2));
	}

	for (int i = 0; i <= SqExc.size(); i++) {
		sumArrSqExc += SqExc[i];
	}
	return (sumArrSqExc / Arr.size());
}
