#include "helpers.hpp"
#include "stats.hpp"

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> values{3, 7, 2, 9, 4};
    if (auto m = mean(values))
        std::cout << "mean: " << *m << '\n';

    std::cout << "max: " << max_value(values) << '\n';
    std::cout << "average: " << average_int(values) << '\n';
    std::cout << "label: " << label_for(values.front()) << '\n';

    char name[8];
    copy_name(name, "contributor1");
    std::cout << "name: " << name << '\n';

    std::cout << "share: " << percent(3, 12) << "%\n";
    return 0;
}
