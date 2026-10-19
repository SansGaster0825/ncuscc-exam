#include <iostream>
#include <vector>

#include "stats.h"
#include "format.h"

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    long long n = 0;
    if (!(std::cin >> n)) return 0;

    std::vector<long long> values;
    if (n > 0) values.reserve(static_cast<std::size_t>(n));

    for (long long i = 0; i < n; ++i) {
        long long x = 0;
        if (!(std::cin >> x)) break;
        values.push_back(x);
    }

    Stats s = computeStats(values);
    printStats(s);

    return 0;
}
