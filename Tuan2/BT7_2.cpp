#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double n;
    cin >> n;
    double sum = 1, oldsum = 0;
    int i = 1;
    double gt = 1, gt1 = 1;
    while (sum - oldsum > 0.001) {
        if(i % 2 == 0) gt *= i;
        else gt1 *= i;
        oldsum = sum;
        sum += pow(n, i/2) / gt * pow(n, i - i/2) / gt1;
        //chia nho ra de tinh toan ((a*b) / (c*d) == a/c * b/d)
        i++;
        //cout << i << ' ' << sum << ' ' << gt << endl;
    }
    cout << fixed << setprecision(4) << sum;
    return 0;
}