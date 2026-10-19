#include "format.h"

#include <iostream>

std::string formatStats(const Stats& s) {
    std::string out;
    out += "count=" + std::to_string(s.count) + "\n";
    out += "sum=" + std::to_string(s.sum) + "\n";
    out += "min=" + std::to_string(s.minValue) + "\n";
    out += "max=" + std::to_string(s.maxValue) + "\n";
    return out;
}

void printStats(const Stats& s) {
    std::cout << formatStats(s);
}
