#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long  n;
    cin >> n;
    int x;
    if (n == 0) x = 1;
    else x = log10(abs(n)) + 1;
    cout << x;
    return 0;
}