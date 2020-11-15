#include "pch.h"
#include "CppUnitTest.h"
#include "../LB6.4R.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest64R
{
	TEST_CLASS(UnitTest64R)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

			int t;
			const int SIZE = 5;
			int a[SIZE] = { 1,2,3,4,5 };
			t = Sum(a, SIZE, 0, a[0]);
			Assert::AreEqual(t, 0);

		}
	};
}
