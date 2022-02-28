#include <iostream>
#include <cmath>
using namespace std;
 int main() {
     int lowerBound, upperBound;
     cin >> lowerBound >> upperBound;
     for (int i = lowerBound; i <= upperBound; ++i ) {
         if (sqrt(i) == (int)sqrt(i)) cout << i << " ";
     }
     return 0;
 }