#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CppQ5Tests
{
    //TODO a student intern  has coded the method poor_mean, please improve this method by coding the method good_mean
    //and write one unit test to test that it return the appropriate mean value.
    class AdvancedMath
    {
        int poor_mean(int* array, int size)
        {
            int i = 0;
            int mean = 0;
            while (1)
            {
                mean = mean + array[i];
                if (i >= size)
                    break;
            }
            return mean / i;
        }

        int good_mean(int* array, int size)
        {
            //todo implement code here


        }

    };


	TEST_CLASS(AdvancedMathTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            //You can use this test method to validate your function.
            Assert::IsTrue(false);
		}
	};
}
