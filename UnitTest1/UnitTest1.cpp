#include "pch.h"
#include "CppUnitTest.h"
#include "F:\lpnu\labi\Lab_05_3\Lab_05_3\Lab_05_3.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double x, z;
			x = 5;
			z = ((pow(cos(x), 2)) + 1) / (exp(x));
			double ExpectedValue = s(x);

			Assert::AreEqual(z, ExpectedValue, 0.01);
		}
	};
}
