
// simetria de matriz: todo a_ij == a_ji

#include <stdio.h>

int main() {
	int n;

	// ler n
	scanf("%d", &n);

	// declarar matriz (n x n)
	int mat[n][n];

	// ler matriz
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &mat[i][j]);
		}
	}

	// procurar elemento assimétrico
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (mat[i][j] != mat[j][i]) {
				// no caso de existir, escrever 0 e sair
				printf("0");
				return 0;
			}
		}
	}

	// nenhum assimétrico, escrever 1
	printf("1");

	return 0;
}