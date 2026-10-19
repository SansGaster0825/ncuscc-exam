#include <iostream>
#include <string>
using namespace std;

struct Device {
    string name;
    int count;
    int totalHours;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Device devs[4] = {
        {"printer", 0, 0},
        {"scanner", 0, 0},
        {"router",  0, 0},
        {"server",  0, 0}
    };

    int n;
    if (!(cin >> n)) return 0;

    for (int i = 0; i < n; ++i) {
        string type, status;
        int hours;
        if (!(cin >> type >> status >> hours)) break;

        for (int k = 0; k < 4; ++k) {
            if (devs[k].name == type) {
                devs[k].count++;
                devs[k].totalHours += hours;
                break;
            }
        }
    }

    int best = 0;
    for (int k = 0; k < 4; ++k) {
        cout << devs[k].name << " " << devs[k].count << " " << devs[k].totalHours << "\n";
        if (devs[k].totalHours > devs[best].totalHours) {
            best = k;
        }
    }

    cout << "busiest " << devs[best].name << "\n";
    return 0;
}
