// Tyuiu.BreslavskayaIV.Sprint0.Task7.V4.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "math.h"
#include "../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: This is an example of a library function
class Service7 : public ISprint0Task7
{
	virtual float Rezalt(int k, int a) override
	{
		int k;
		int k1 = k / 1000000;
		int k2 = (k / 100000) % 10;
		int k3 = (k / 10000) % 10;
		int k4 = (k / 1000) % 10;
		int k5 = (k / 100) % 10;
		int k6 = (k / 10) % 10;
		bool p = (k1 == a) || (k2 == a) || (k3 == a) || (k4 == a) || (k5 == a) || (k6 == a);
		return p;
	}


};

