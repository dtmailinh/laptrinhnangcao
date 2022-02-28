#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main() {
    int a, b, c;
    float p, s;
    cin >> a >> b >> c;
    if ((a+b <= c) || (a+c <= b) || (b+c <= a)) cout <<"invalid";
    p = (float)(a + b + c) / 2;
    s = sqrt(p*(p - a)*(p - b)*(p - c));
    cout << fixed << setprecision(2) << s ;
    return 0;
}