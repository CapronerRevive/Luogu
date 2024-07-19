#include "bits/stdc++.h"

using namespace std;

typedef long long LL;
typedef unsigned long long ULL;

const int N = 100000 + 10;

int main() {
    int a, b;
    cin >> a >> b;
    int t = 10 + a / b;
    if (a % b > 0) {
        t += 1;
    }
    t = 480 - t;
    if (t < 0) {
        t += 24 * 60;
    }
    int h = t / 60;
    int m = t % 60;

    if (h < 10) {
        cout << "0";
    }
    cout << h;
    cout << ":";
    if (m < 10) {
        cout << "0";
    }
    cout << m;
    cout << endl;
}