
// elemento de maior valor na matriz

#include <stdio.h>

int main() {
	int m, n;

	// ler m e n
	scanf("%d %d", &m, &n);

	// declarar matriz (m x n)
	int mat[m][n];

	// ler matriz
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &mat[i][j]);
		}
	}

	// iniciar max e suas posições com o primeiro elemento
	int max = mat[0][0];
	int max_i = 0, max_j = 0;

	// maior elemento: armazenar o maior valor até então
	// e sua posição, e trocar se o atual for maior
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (mat[i][j] > max) {
				max = mat[i][j];
				max_i = i;
				max_j = j;
			}
		}
	}

	// escrever a posição do elemento de maior valor
	printf("%d %d", max_i, max_j);

	return 0;
}