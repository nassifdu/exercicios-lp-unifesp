
#include <stdio.h>

#define MAX 100

int main() {
    int N;
    scanf("%d", &N);
    int A[N], B[N], result[MAX];

    for (int i = 0; i < N; i++) scanf("%d", &A[i]);
    for (int i = 0; i < N; i++) scanf("%d", &B[i]);

    // carry da conta armada
    int carry = 0;
    // da direita para a esquerda
    for (int i = N - 1; i >= 0; i--) {
    	// somar o "em cima"
        int sum = A[i] + B[i] + carry;
        result[i] = sum % 10;
        carry = sum / 10;
    }

    // se sobrar carry:
    if (carry > 0) {
        printf("%d ", carry);
    }
    for (int i = 0; i < N; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}