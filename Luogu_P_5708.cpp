#include "bits/stdc++.h"

using namespace std;

typedef long long LL;
typedef unsigned long long ULL;

const int N = 100000 + 10;

int main() {
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    double p = (a + b + c) / 2;
    double s = sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%.1lf\n", s);
}