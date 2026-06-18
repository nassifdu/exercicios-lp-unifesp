
// BATALHA NAVAL

#include <stdio.h>

// algoritmo flood fill recursivo para limpar elementos adjacentes
void flood_fill(int m, int n, int tab[m][n], int i, int j) {
	// verificar que estamos dentro da matriz
	if (i < 0 || i >= m || j < 0 || j >= n) return;
	// se não for 1 (barco), ignorar
	if (tab[i][j] != 1) return;

	// flood fill:
	// 1. limpar atual
	tab[i][j] = 0;

	// 2. recursivamente limpar i-, i+, j-, j+ que são barco
	flood_fill(m, n, tab, i + 1, j); // direita
	flood_fill(m, n, tab, i - 1, j); // esquerda
	flood_fill(m, n, tab, i, j + 1); // baixo
	flood_fill(m, n, tab, i, j - 1); // cima
}

// módulo que retorna o número de barcos no tabuleiro
int barcos(int m, int n, int tab[m][n]) {
	int total = 0;

	// criamos uma cópia da matriz para não alterarmos a original
	// (já que o flood fill limparia todos adjacentes, quebrando o jogo)

	int tab_copia[m][n];

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			tab_copia[i][j] = tab[i][j];

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (tab_copia[i][j] == 1) {
				// se for um barco, total++ e flood_fill aqui
				// (para ignorarmos adjacentes)
				total++;
				flood_fill(m, n, tab_copia, i, j);
			}
		}
	}

	return total;
}

int main() {
	int m, n;

	// ler m e n
	scanf("%d %d", &m, &n);

	// declarar tabuleiro ("tab"): matriz m x n
	int tab[m][n];

	// ler tabuleiro, convertendo # = 1 e . = 0
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			char ch;
			// espaço antes do %c para ignorar espaços e quebras
			scanf(" %c", &ch);

			if (ch == '#') {
				tab[i][j] = 1;
			} else {
				tab[i][j] = 0;
			}
		}
	}

	// ler o número k de disparos
	int k;
	scanf("%d", &k);

	// leremos e aplicaremos disparos e, após cada um, contaremos o número de barcos
	// des (destruídos) inicia com 0; se bar < last_bar (diminuiu o nº de barcos), des++
	int des = 0;
	int bar = barcos(m, n, tab);
	int last_bar = bar;

	// for cada disparo (d vezes)
	for (int i = 0; i < k; i++) {
		// ler coordenadas, corrigindo x-1 e y-1
		int x, y;
		scanf("%d %d", &x, &y);

		// 1 (#) vira 0 (.)
		tab[x-1][y-1] = 0;
		bar = barcos(m, n, tab);

		if (bar < last_bar) {
			des++;
		}
		last_bar = bar;
	}

	printf("%d", des);
	return 0;
}