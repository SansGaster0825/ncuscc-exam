#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    if (!(cin >> n)) return 0;

    long long sum = 0;
    int mn = 0, mx = 0;
    long long cnt = 0;
    bool first = true;

    for (long long i = 0; i < n; ++i) {
        int x;
        if (!(cin >> x)) break;
        ++cnt;
        sum += x;
        if (first) { mn = mx = x; first = false; }
        else {
            if (x < mn) mn = x;
            if (x > mx) mx = x;
        }
    }

    cout << "count=" << cnt << "\n";
    cout << "sum="   << sum << "\n";
    cout << "min="   << mn  << "\n";
    cout << "max="   << mx  << "\n";
    return 0;
}
