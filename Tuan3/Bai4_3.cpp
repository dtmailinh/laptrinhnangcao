#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
    int n;
    vector<float>a;
    float k;
    
    cin >> n;
    for (int i = 0; i < n; i++ ) {
        float x;
        cin >> x;
        a.push_back(x);
    }
    cin >> k;
    a.push_back(k);
    sort(a.begin(), a.end());
    for (int i = 0; i <= n; i++) {
        cout << fixed << setprecision(2) << a[i] <<" ";
    }
    return 0;
}