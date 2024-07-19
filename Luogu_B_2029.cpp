#include "bits/stdc++.h"

using namespace std;

typedef long long LL;
typedef unsigned long long ULL;

const int N = 100000 + 10;

int main() {
    double h, r;
    cin >> h >> r;
    h /= 10;
    r /= 10;
    double v = 3.14 * r * r * h;
    int ans = (int)(ceil(20.0 / v));
    cout << ans << endl;
}