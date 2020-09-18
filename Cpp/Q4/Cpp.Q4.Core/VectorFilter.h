#pragma once

#include <vector>
#include <memory>

class VectorFilter
{
    ///TODO Create all useful unit tests for this very complex function. We want 100% of coverage.
    static std::vector<int> keep_in_between_values(const std::shared_ptr<std::vector<int>> raw_vector, 
        int min_limit_inclusive, int max_limit_exclusive)
    {
        std::vector<int> filtered_vector;

        if (raw_vector == nullptr)
            return filtered_vector;
         
        for (auto value : *raw_vector)
        {
            if (value >= min_limit_inclusive && value < max_limit_exclusive)
                filtered_vector.push_back(value);
        }

        return filtered_vector;
    }
};