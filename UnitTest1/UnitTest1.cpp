#include "pch.h"
#include "CppUnitTest.h"
#include "../laba6.1/laba6.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1LAB61it
{
	TEST_CLASS(UnitTest1LAB61it)
	{
	public:


		TEST_METHOD(TestMethod1)
		{
			int d[] = { 1,2,3,4,5 };
			int result = Number(d, 5);
			Assert::AreEqual(3, result);
		}
	};
}
