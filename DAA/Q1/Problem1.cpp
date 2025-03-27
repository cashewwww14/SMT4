#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long k;
        cin >> k;

        long long count = 0;
        for (int n = 1; ; ++n) {
            if (count + n >= k) {
                long long diff = k - count;
                long long m = diff - 1;
                cout << m << " " << n << endl;
                break;
            }
            count += n;
            if (count >= 2 * k) {
                break;
            }
        }
    }
    return 0;
}
