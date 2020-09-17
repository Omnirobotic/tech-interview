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

        TEST_METHOD(CppQ1Test)
        {
            int nb_command_to_add = 100000;

            Shop shop;
            auto add_task = std::async(&Shop::add_commands, &shop, nb_command_to_add);
            auto consume_task = std::async(&Shop::consume_commands, &shop, nb_command_to_add);

            add_task.wait();
            consume_task.wait();

            Assert::AreEqual(0, shop._nb_command_pending);

            auto last_consumed_command = consume_task.get();
            Assert::AreEqual(nb_command_to_add - 1, last_consumed_command);
        }
    };
}