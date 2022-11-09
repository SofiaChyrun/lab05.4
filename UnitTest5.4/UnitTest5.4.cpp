#include "pch.h"
#include "CppUnitTest.h"
#include "../ChyrunSofialab5.4/ChyrunSofialab5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest54
{
	TEST_CLASS(UnitTest54)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = S0(0);
			Assert::AreEqual(t , 0);
		}
	};
}
