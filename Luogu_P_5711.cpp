#include "bits/stdc++.h"

using namespace std;

typedef long long LL;
typedef unsigned long long ULL;

const int N = 100000 + 10;

int main() {
    int n;
    cin >> n;
    bool flag = false;
    if (n % 4 == 0) {
        if (n % 100 == 0) {
            if (n % 400 == 0) {
                flag = true;
            }
        } else {
            flag = true;
        }
    }
    cout << (flag ? 1 : 0) << endl;
}