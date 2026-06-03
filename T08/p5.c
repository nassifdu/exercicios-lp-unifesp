
// encontrar MINMAX (maior elemento da linha que tem o menor elemento da matriz)

#include <stdio.h>

int main() {
	int m, n;
	int min_i = 0, max_j = 0;

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

	// iniciar min com o primeiro elemento
	int min = mat[0][0];

	// menor elemento: armazenar o menor valor até então
	// e sua posição, e trocar se o atual for menor
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (mat[i][j] < min) {
				min = mat[i][j];
				min_i = i;
			}
		}
	}

	// encontrar maior elemento da min_i-ésima linha
	// e armazenar sua coluna em max_j
	// aqui, só precisa-se de 1 for (dos elementos a_ij tais que i = min_i)

	// iniciar max com o primeiro elemento da linha
	int max = mat[min_i][0];

	for (int j = 0; j < n; j++) {
		if (mat[min_i][j] > max) {
			max = mat[min_i][j];
			max_j = j;
		}
	}

	// escrever a posição do MINMAX (min_i, max_j)
	printf("%d %d", min_i, max_j);

	return 0;
}