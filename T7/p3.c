
#include <stdio.h>

int main() {
	int N, A[100], B[100];

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}

	for (int i = 0; i < N; i++) {
		scanf("%d", &B[i]);
	}

	for (int i = 0; i < N; i++) {
		printf("%d ", A[i] * B[i]);
	}

	return 0;
}