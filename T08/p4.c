
// soma das linhas

#include <stdio.h>

int main() {
	int m, n;

	// ler m e 
	scanf("%d %d", &m, &n);

	// declarar matriz (m x n)
	int mat[m][n];

	// ler matriz
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &mat[i][j]);
		}
	}

	// escrever a soma de cada linha (soma dos a_ij da i-ésima linha)
	for (int i = 0; i < m; i++) {
		int l = 0;
		for (int j = 0; j < n; j++) {
			l += mat[i][j];
		}
		printf("%d ", l);
	}

	return 0;
}