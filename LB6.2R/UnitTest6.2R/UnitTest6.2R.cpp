#include "pch.h"
#include "CppUnitTest.h"
#include "../LB6.2R.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62R
{
	TEST_CLASS(UnitTest62R)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int c;
			int a[2] = { 0, 1 };
			c = Max(a, 2);
			Assert::AreEqual(c, 0);
		}
	};
}
