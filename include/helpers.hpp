#ifndef PR_REVIEWER_HELPERS_HPP
#define PR_REVIEWER_HELPERS_HPP

#include <string>
#include <vector>

// Returns the largest value in v.
int max_value(const std::vector<int>& v);

// Returns the integer average of v.
int average_int(const std::vector<int>& v);

// Returns a label describing the sign of code.
const std::string& label_for(int code);

// Copies a name into a fixed-size buffer.
void copy_name(char (&dst)[8], const char* src);

// Returns part as a percentage of whole.
int percent(int part, int whole);

#endif
