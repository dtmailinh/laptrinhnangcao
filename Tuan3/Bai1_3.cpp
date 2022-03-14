#include <iostream>
#include <vector>
using namespace std;
bool check (vector<int>a, vector<int>b, int n) {
    for (int i = 0; i <= n; i++ ) {
        if (a[i] != b[i]) {
            return false;
        } 
    }
    return true;
}
int main() {
    int n;
    cin >> n;
    vector<int>a(n);
    vector<int>b(n);
    
    for (int i = 0; i < n; i++ ) {
        cin >> a[i];
    }
     for (int i = 0; i < n; i++ ) {
        cin >> b[i];
    }
   
    if (check(a, b, n) == true) cout << "YES";
    else cout << "NO";
    return 0;
}