#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;

    const int CAP = 8;
    int buf[CAP] = {0};
    int count = 0;
    int last = 0;

    for (int i = 0; i < n; ++i) {
        int x;
        if (!(cin >> x)) break;
        buf[count % CAP] = x;
        last = x;
        ++count;
    }

    int kept  = (count < CAP) ? count : CAP;
    int start = (count <= CAP) ? 0 : (count % CAP);

    long long sum = 0;
    for (int k = 0; k < kept; ++k) {
        sum += buf[(start + k) % CAP];
    }

    int oldest = (kept > 0) ? buf[start] : 0;
    if (kept == 0) last = 0;

    cout << "kept="   << kept   << "\n";
    cout << "oldest=" << oldest << "\n";
    cout << "last="   << last   << "\n";
    cout << "sum="    << sum    << "\n";
    return 0;
}
