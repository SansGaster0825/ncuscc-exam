#ifndef STATS_H
#define STATS_H

#include <vector>

struct Stats {
    long long count;
    long long sum;
    long long minValue;
    long long maxValue;
};

Stats computeStats(const std::vector<long long>& values);

#endif
