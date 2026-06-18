
#include <stdio.h>

int main() {
    int n, f, a = 0, b = 1;

    scanf("%d", &n);

    if (n == 0) {
        f = a;
    }
    else if (n == 1) {
        f = b;
    }
    else {
        for(int t = 2; t <= n; t++) {
            f = a + b; // termo n
            a = b; // termo n-2
            b = f; // termo n-1
        }
    }

    printf("%d", f);

    return 0;
}
