#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.BreslavskayaIV.Sprint0.Task2.V0.Lib/Tyuiu.BreslavskayaIV.Sprint0.Task2.V0.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task2V0* result = new Service();
			int a = 3;
			int b = 4;
			int c;
			c = result->Add(a, b);
			Assert::AreEqual(7, c);
		}
	
	};
}
