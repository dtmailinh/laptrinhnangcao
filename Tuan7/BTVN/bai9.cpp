
void  swap(char *a, char *b) {
    char tmp = *a; 
    *a = *b;
    *b = tmp;
}
void reverse(char *s) {
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }
    for (int i = 0; i < len/2; i++ ) {
        swap(s[i], s[len-1-i]);
    }
}
