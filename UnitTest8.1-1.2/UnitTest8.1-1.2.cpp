#include "pch.h"
#include "CppUnitTest.h"
#include "../Project 8.1-1(рекурсія).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest8112
{
	TEST_CLASS(UnitTest8112)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char s[10] = "jjkjnjSQV";

			bool t = Include(s,0);

			Assert::AreEqual(t,true);
		}
	};
}
