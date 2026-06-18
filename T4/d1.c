
#include <stdio.h>

// 10^e
int tento(int e) {
    int n = 1;
    
    for (int i = 1; i <= e; i++) {
        n *= 10;
    }

    return n;
}

// number of digits of int
int ilen(int n) {
    int count = 0;
    
    while (n != 0) {
        n /= 10;
        ++count;
    }
    
    return count;
}

// i-th digit of number
int digit(int n, int i) {
    // index starts at 1
    return n / tento(ilen(n) - i) % 10;
}

// reversed number (e.g., reversed(1234) = 4321)
int reversed(int n) {
    int r = 0;
    
    for (int i = ilen(n); i >= 1; i--) {
        int d = digit(n, i);
        r += d * tento(i - 1);
    }

    return r;
}

// sum of i terms d_i*i where d_i is the i-th (starting at 1) digit of a number
int sumDigitsTimesIndexes(int n) {
    int s = 0;

    for (int i = 1; i <= ilen(n); i++) {
        int d = digit(n, i);
        s += d * i;
    }

    return s;
}

int main() {
    int n, r, verificador;

    scanf("%d", &n);
    r = reversed(n);
    verificador = sumDigitsTimesIndexes(n + r) % 10;

    printf("%d", verificador);

    return 0;
}
