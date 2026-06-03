
#include <stdio.h>

int main() {
    int N, V[100], X, freq = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
    	scanf("%d", &V[i]);
    }

    scanf("%d", &X);

    for (int i = 0; i < N; i++) {
        if (V[i] == X) freq++;
    }

    printf("%d\n", freq);

    for (int i = 0; i < N; i++) {
        if (V[i] == X) {
            printf("%d\n", i); // ou i+1 se começa por 1
        }
    }

    return 0;
}