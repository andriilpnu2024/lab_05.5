#include "pch.h"
#include "CppUnitTest.h"
#include "../PR-5.5/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double c;
			c = f(0);
			Assert::AreEqual(c, -1.);
		}
	};
}
