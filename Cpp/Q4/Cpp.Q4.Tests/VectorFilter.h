#pragma once

#include <exception>

class VectorFilter
{
public:
    static bool is_within_range(const int value, int min_limit_inclusive, int max_limit_exclusive)
    {
        if (min_limit_inclusive >= max_limit_exclusive)
            throw std::exception("Invalid min/max combination.");

        return (value >= min_limit_inclusive && value < max_limit_exclusive);
    }
};