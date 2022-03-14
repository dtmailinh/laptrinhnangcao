#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<double>a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    for (int i = 0; i < n ; i++ ) {
        cout << fixed << setprecision(2) << a[i] << " ";
    }
    return 0;
}