#include "bits/stdc++.h"

using namespace std;

typedef long long LL;
typedef unsigned long long ULL;

const int N = 100000 + 10;

int main() {
    char c;
    cin >> c;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3 + i; ++j) {
            if (i == 0 && j == 2) {
                cout << c;
            } else if (i == 1 && j > 0 && j < 4) {
                cout << c;
            } else if (i == 2) {
                cout << c;
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}