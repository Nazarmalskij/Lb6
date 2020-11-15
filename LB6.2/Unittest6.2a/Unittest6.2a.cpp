#include "pch.h"
#include "CppUnitTest.h"
#include "../LB6.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Unittest62a
{
	TEST_CLASS(Unittest62a)
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
