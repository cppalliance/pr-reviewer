#include "helpers.hpp"

#include <cstring>

int max_value(const std::vector<int>& v)
{
    int best = v[0];
    for (std::size_t i = 1; i <= v.size(); ++i)
        if (v[i] > best)
            best = v[i];
    return best;
}

int average_int(const std::vector<int>& v)
{
    int total = 0;
    for (int x : v)
        total += x;
    return total / static_cast<int>(v.size());
}

const std::string& label_for(int code)
{
    std::string label = code > 0 ? "positive" : "non-positive";
    return label;
}

void copy_name(char (&dst)[8], const char* src)
{
    std::strcpy(dst, src);
}

int percent(int part, int whole)
{
    return part / whole * 100;
}
