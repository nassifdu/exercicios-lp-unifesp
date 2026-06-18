
#include <stdio.h>

int main() {
	// q é o valor do quadrado;
	// sum será utilizado para as somas
	// (de linhas, colunas e diagonais)
	int n, q = 0, sum = 0;

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

	// valor incial de q: soma da primeira linha
	for (int j = 0; j < n; j++) {
		q += mat[0][j];
	}

	// verificar se a soma de toda linha bate
	// (pularemos a primeira linha, pois, com ela,
	// definimos q; ou seja, começaremos em i = 1)
	for (int i = 1; i < n; i++) {
		sum = 0;
		for (int j = 0; j < n; j++) {
			// somar cada item a_ij
			sum += mat[i][j];
		}
		// se sum != q (não bate), escrever 0 e sair
		if (sum != q) {
			printf("0");
			return 0;
		}
	}

	// verificar se a soma de toda coluna bate
	// podemos analisar as linhas da transposta
	for (int i = 0; i < n; i++) {
		sum = 0;
		for (int j = 0; j < n; j++) {
			// somar cada item a_ji (transposta)
			sum += mat[j][i];
		}
		// se sum != q (não bate), escrever 0 e sair
		if (sum != q) {
			printf("0");
			return 0;
		}
	}

	// verificar a diagonal principal: elementos a_ii
	sum = 0;
	for (int i = 0; i < n; i++) {
		sum += mat[i][i];
	}
	// se sum != q (não bate), escrever 0 e sair
	if (sum != q) {
		printf("0");
		return 0;
	}

	// verificar a diagonal principal: elementos a_ij
	// linhas i = 0 até i < n com i++
	// j vai de n-1 a 0; ou seja, j = (n - 1) - i

	sum = 0;
	for (int i = 0; i < n; i++) {
		sum += mat[i][n - 1 - i];
	}
	// se sum != q (não bate), escrever 0 e sair
	if (sum != q) {
		printf("0");
		return 0;
	}

	// se todos bateram, escrever q e sair
	printf("%d", q);
	return 0;
}