#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Project\Lb6\LB6.4\LB6.4.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest64
{
	TEST_CLASS(UnitTest64)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			const int SIZE = 5;
			int a[SIZE] = { 1,2,3,4,5 };
			t = Sum(a, SIZE);
			Assert::AreEqual(t, 0);

		}
	};
}
