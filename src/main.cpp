#include "stats.hpp"

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> values{3, 7, 2, 9, 4};
    if (auto m = mean(values))
        std::cout << "mean: " << *m << '\n';
    return 0;
}
