﻿#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.BreslavskayaIV.Sprint0.Task6.V4.Lib/Tyuiu.BreslavskayaIV.Sprint0.Task6.V4.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuBreslavskayaIVSprint0Task6V4Test
{
	TEST_CLASS(TyuiuBreslavskayaIVSprint0Task6V4Test)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint0Task6* date = new Servise6();
			int a = 2;
			int b = 3;
			float c;
			int d;
			c = date->Calculate(a,  b);
			d = int(c);
			Assert::AreEqual(1, d);
		}
	};
}
