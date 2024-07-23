#include "bits/stdc++.h"

using namespace std;

typedef long long LL;
typedef unsigned long long ULL;

const int N = 100000 + 10;

int main() {
    int x;
    cin >> x;
    int a[5] = {0};
    bool f1 = (x % 2 == 0);
    bool f2 = (x > 4 && x <= 12);
    if (f1 && f2) {
        a[0] = 1;
    }
    if (f1 || f2) {
        a[1] = 1;
    }
    if (f1 ^ f2) {
        a[2] = 1;
    }
    if (!(f1 || f2)) {
        a[3] = 1;
    }
    for (int i = 0; i < 4; ++i) {
        if (i) {
            cout << " ";
        }
        cout << a[i];
    }
    cout << endl;
}