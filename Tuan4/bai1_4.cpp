int maxThree(int a, int b, int c) {
    int max = (a > b) ? a : b;
    max = (c > max) ? c : max;
    return max;
}
   