
#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, t = 0;

	scanf("%d %d", &a, &b);

	if (a == 0 || b == 0) { // 0 * n = 0 para qualquer n real
		printf("0");
	}
	else {
		for (int i = 1; i <= abs(a); i++) {
			t += abs(b); // usando módulos (abs) para o for funcionar e depois arrumo os sinais
		}
	}

	if (!(a < 0) != !(b < 0)) {
	// xor (exclusive or)
	// (se a ou b for negativo mas não os dois simultaneamente)
		t = -t; // invertendo o sinal
	}

	printf("%d", t);

	return 0;
}
