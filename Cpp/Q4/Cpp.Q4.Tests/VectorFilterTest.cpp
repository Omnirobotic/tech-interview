#include "pch.h"
#include "CppUnitTest.h"

#include "VectorFilter.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CppQ4Tests
{
	TEST_CLASS(VectorFilterTest)
	{
	public:
		
        ///TODO Add more unit tests to validate VectorFilter::is_within_range. We want 100% of coverage.
        TEST_METHOD(is_within_range_between)
        {
            const int value = 5;
            const int min = 0;
            const int max = 10;

            const auto result = VectorFilter::is_within_range(value, min, max);

            Assert::IsTrue(result);
        }

        TEST_METHOD(is_within_range_max_smaller_than_min)
        {
            const int value = 5;
            const int min = 0;
            const int max = -10;

            auto exception_thrown = false;
            try
            {
                VectorFilter::is_within_range(value, min, max);
            }
            catch (std::exception& e)
            {
                exception_thrown = true;
            }

            Assert::IsTrue(exception_thrown);
        }
	};
}
