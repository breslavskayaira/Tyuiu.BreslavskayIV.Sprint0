#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.BreslavskayaIV.Sprint0.Task7.V4.Lib/Tyuiu.BreslavskayaIV.Sprint0.Task7.V4.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuBreslavskayaIVSprint0Task7V4Test
{
	TEST_CLASS(TyuiuBreslavskayaIVSprint0Task7V4Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task7* date = new Service7();
			int k = 100000;
			int a = 1;
			int c;
			c = date->Rezalt(k, a);
			Assert::AreEqual(1, c);
		}
	};
}
