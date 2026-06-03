
// transposição de matriz: a_ij vira a_ji

#include <stdio.h>

int main() {
	int m, n;

	// ler m e n
	scanf("%d %d", &m, &n);

	// declarar matriz original (m x n)
	int mat[m][n];

	// ler matriz: for até m e for até n
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &mat[i][j]);
		}
	}

	// escrever matriz transposta (n x m)
	// o for inverte (até n e até m) e cada a_ij vira a_ji
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%d ", mat[j][i]);
		}
		printf("\n");
	}

	return 0;
}