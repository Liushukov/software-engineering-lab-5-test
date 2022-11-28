#include "pch.h"
#include "CppUnitTest.h"
#include "D:\NTU_KHPI\Инженерия_Програмного_Обеспечения\Lab3\IPZ_3\IPZ_3\IPZ_3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int n = 6;
			int x = 2;
			int expected = 0;

			int actual = calculate(x, n);

			Assert::AreEqual(expected, actual);
		}

	public:

		TEST_METHOD(TestMethod2)
		{
			int n = 3;
			int x = 2;
			int expected = -7;

			int actual = calculate(x, n);

			Assert::AreEqual(expected, actual);
		}
	};
	TEST_CLASS(checkValidParams_Tests)
	{
	public:

		TEST_METHOD(TestMethod3)
		{
			int n = -5;

			try 
			{
				checkValidParams(n);
				Assert::IsTrue(true);
			}
			catch (...)
			{
				Assert::Fail();
			}
		}
	public:
		TEST_METHOD(TestMethod4)
		{
			int n = 1;

			try
			{
				checkValidParams(n);
				Assert::Fail();
			}
			catch (...)
			{
				Assert::IsTrue(true);
			}
		}
	};
}
