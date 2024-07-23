#include "bits/stdc++.h"
using namespace std;
int main() {
    int T;
    cin >> T;
    if (T == 1) {
        // 粘贴问题 1 的主函数代码，除了 return 0
        cout << "I love Luogu!";
    } else if (T == 2) {
        // 粘贴问题 2 的主函数代码，除了 return 0
        cout << 2 + 4 << " " << 10 - 2 - 4;
    } else if (T == 3) {
        // 请自行完成问题 3 的代码
        cout << 3 << endl;
        cout << 12 << endl;
        cout << 2 << endl;
    } else if (T == 4) {
        // 请自行完成问题 4 的代码
        cout << 500.0 / 3 << endl;
    } else if (T == 5) {
        // 请自行完成问题 5 的代码
        cout << 15 << endl;
    } else if (T == 6) {
        // 请自行完成问题 6 的代码
        cout << sqrt(6*6+9*9) << endl;
    } else if (T == 7) {
        // 请自行完成问题 7 的代码
        cout << 110 << endl;
        cout << 90 << endl;
        cout << 0 << endl;
    } else if (T == 8) {
        // 请自行完成问题 8 的代码
        double pi = 3.141593;
        cout << 10.0 * pi << endl;
        cout << pi * 25.0 << endl;
        cout << pi * 125.0 * 4.0 / 3 << endl;
    } else if (T == 9) {
        // 请自行完成问题 9 的代码
        int x = 1;
        for (int i = 0; i < 3; ++i) {
            x = x + 1;
            x = x * 2;
        }
        cout << x << endl;
    } else if (T == 10) {
        // 请自行完成问题 10 的代码
        cout << 9 << endl;
    } else if (T == 11) {
        // 请自行完成问题 11 的代码
        cout << 100.0 / 3 << endl;
    } else if (T == 12) {
        // 请自行完成问题 12 的代码
        cout << (int)('M' - 'A') + 1 << endl;
        cout << (char)('A' + 17) << endl;
    } else if (T == 13) {
        // 请自行完成问题 13 的代码
        double pi = 3.141593;
        double a = pi * 4.0 * 4.0 * 4.0 * 4.0 / 3;
        double b = pi * 10.0 * 10.0 * 10.0 * 4.0 / 3;
        double c = a + b;
        int ans = 1;
        while (ans * ans * ans <= c) {
            ans += 1;
        }
        cout << ans - 1 << endl;
    } else if (T == 14) {
        // 请自行完成问题 14 的代码
        cout << 50 << endl;
    }
    return 0;
}
