#include "stats.h"

Stats computeStats(const std::vector<long long>& values) {
    Stats s;
    s.count = static_cast<long long>(values.size());
    s.sum = 0;
    s.minValue = 0;
    s.maxValue = 0;

    if (values.empty()) {
        return s;
    }

    s.minValue = values[0];
    s.maxValue = values[0];

    for (std::size_t i = 0; i < values.size(); ++i) {
        s.sum += values[i];
        if (values[i] < s.minValue) s.minValue = values[i];
        if (values[i] > s.maxValue) s.maxValue = values[i];
    }

    return s;
}
