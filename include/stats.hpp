#ifndef PR_REVIEWER_STATS_HPP
#define PR_REVIEWER_STATS_HPP

#include <optional>
#include <vector>

// Returns the arithmetic mean of v, or nothing when v is empty.
std::optional<double> mean(const std::vector<int>& v);

#endif
