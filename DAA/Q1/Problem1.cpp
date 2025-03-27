#include <iostream>
using namespace std;
typedef long long LL;

int min_students_to_remove(LL n) {
    LL thresholds[33], power_of_2 = 4;
    for (int i = 2; i <= 31; i++) {
        thresholds[i - 1] = (LL)i * power_of_2 - 1;
        power_of_2 *= 2;
    }
    for (int i = 1; i <= 30; i++) {
        if (n <= thresholds[i]) return i;
    }
    return -1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        LL n;
        cin >> n;
        cout << min_students_to_remove(n) << endl;
    }
    return 0;
}
