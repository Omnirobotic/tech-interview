#pragma once

#include <memory>

class VectorFilter
{
    ///TODO Create a unit test project with unit tests to validate this very complex function. We want 100% of coverage.
    ///If you don't know how to create unit tests, just enumerate all test cases you can think of.
    static bool is_within_range(const std::shared_ptr<int> value_ptr, int min_limit_inclusive, int max_limit_exclusive)
    {
        if (min_limit_inclusive >= max_limit_exclusive)
            throw std::exception("Invalid min/max combination.");

        if (value_ptr == nullptr)
            return false;

        return (*value_ptr >= min_limit_inclusive && *value_ptr < max_limit_exclusive);
    }
};