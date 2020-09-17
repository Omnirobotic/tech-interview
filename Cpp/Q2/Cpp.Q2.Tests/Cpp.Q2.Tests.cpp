#include "pch.h"
#include "CppUnitTest.h"

#include "WorkDescription.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CppQ2Tests
{
	TEST_CLASS(CppQ2Tests)
	{
	public:
		
		TEST_METHOD(CppQ2Test)
		{
            WorkDescription desc1("Prefix1", EWorkDescriptionType::HardOnBack);
            const auto desc1_description = desc1.get_description();
            const std::string expected1 = "Prefix1Hard On Back";
            Assert::AreEqual(expected1, desc1_description);

            WorkDescription desc2("Prefix2", EWorkDescriptionType::Intellectual);
            const auto desc2_description = desc2.get_description();
            const std::string expected2 = "Prefix2Intellectual";
            Assert::AreEqual(expected2, desc2_description);
		}
    };
}
