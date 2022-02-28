#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a[1000];
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n ; i++ ) {
        cin >> a[i];
        sum += a[i];
    }
    double mean = (double)sum / n;
    double ps = 0;
    for (int i = 0; i < n; i++ ) {
        ps += (a[i] - mean) * (a[i] - mean);
    }
    ps /= n;
    cout << fixed << setprecision(2) << ps;
    return 0;
}