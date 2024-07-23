#include "bits/stdc++.h"

using namespace std;

typedef long long LL;
typedef unsigned long long ULL;

const int N = 100000 + 10;

int main() {
    int m, t, s;
    cin >> m >> t >> s;
    if (t == 0) {
        cout << 0 << endl;
        return 0;
    }
    int d = s / t;
    if (s % t > 0) {
        d += 1;
    }
    m = max(0, m - d);
    cout << m << endl;
}