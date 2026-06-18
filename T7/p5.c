
#include <stdio.h>

int main() {
	int N, V[100];

	scanf("%d", &N);

	// leitura
	for (int i = 0; i < N; i++) {
		scanf("%d", &V[i]);
	}

	// impressão
	for (int i = N-1; i >= 0; i--) {
		printf("%d ", V[i]);
	}

	return 0;
}