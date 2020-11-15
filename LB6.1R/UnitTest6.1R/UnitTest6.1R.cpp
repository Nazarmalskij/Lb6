#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Project\Lb6\LB6.1R\LB6.1R.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61R
{
	TEST_CLASS(UnitTest61R)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{ 
			int c;
			int r[25]{ 1,10,-10,5,29,-2,4,-3,22,-18,20,19,6,-9,-4,11,23,16,-19,-13,-11,28,21,-8,15 };
			c = Sum(r, 25, 1.);
			Assert::AreEqual(c, -12);
		}
	};
}
