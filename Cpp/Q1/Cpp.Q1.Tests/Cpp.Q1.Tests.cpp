#include "pch.h"
#include "CppUnitTest.h"

#include <future>

#include "Shop.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CppQ1Tests
{
    TEST_CLASS(CppQ1Tests)
    {
    public:

        ///TODO: Modify Shop.h to make sure this test passes all the time and explain why it might pass sometimes.
        //This test simulate the case where you have a thread that is generating data and another thread 
        // that is consuming this data. We need to make sure there is no memory corruption.
        //By the way, if the test doesn't run (ends without the green/red) it means there was a memory access violation.
        TEST_METHOD(CppQ1Test)
        {
            int nb_command_to_add = 100000;

            Shop shop;
            auto create_task = std::async(&Shop::create_commands, &shop, nb_command_to_add);
            auto consume_task = std::async(&Shop::consume_commands, &shop, nb_command_to_add);

            create_task.wait();
            consume_task.wait();

            Assert::AreEqual(0, shop._nb_command_pending);

            auto last_consumed_command = consume_task.get();
            Assert::AreEqual(nb_command_to_add - 1, last_consumed_command);
        }
    };
}