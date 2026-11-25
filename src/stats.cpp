#include "stats.hpp"

#include <numeric>

std::optional<double> mean(const std::vector<int>& v)
{
    if (v.empty())
        return std::nullopt;
    long long total = std::accumulate(v.begin(), v.end(), 0LL);
    return static_cast<double>(total) / static_cast<double>(v.size());
}
