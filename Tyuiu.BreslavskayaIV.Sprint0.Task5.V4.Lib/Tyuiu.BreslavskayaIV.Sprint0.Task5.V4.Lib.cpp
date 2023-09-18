// Tyuiu.BreslavskayaIV.Sprint0.Task5.V4.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "math.h"
#include "../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: This is an example of a library function
class Service5 : public ISprint0Task5
{
	virtual float Zadacha(int a, float b, float c) override

	{
		int d;
		d = a * 2 / 100 / b * c;
		return d;
	}

};