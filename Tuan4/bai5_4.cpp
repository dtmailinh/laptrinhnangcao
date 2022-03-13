bool isPrime (int number) {
    bool check = true;
    if (number == 0 || number == 1 || number < 0) return false;
    else if (number == 2 || number == 3) return true;
    else {
        for (int i = 2; i <= (int)sqrt(number); i++ ) {
            if (number % i == 0) return false;
        }
    }
    return true;
}