// Tyuiu.BreslavskayaIV.Sprint0.Task6.V4.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "math.h"
#include "../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"
// TODO: This is an example of a library function
class Servise6 : public ISprint0Task6
{
	virtual int Calculate(int a, int b) override
	{
		int date;
		date=(5*a)/(7+b);
		return date;
	}

};