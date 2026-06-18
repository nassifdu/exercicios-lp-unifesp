
// transposição in-place

#include <stdio.h>

void transpor(int m[4][4]) {
	// mudanças: 0,1 -> 1,0 e 0,2 -> 2,0 -> 0,2 e 1,2 -> 2,1
	// item i,j vira j,i
	for (int i = 0; i < 4; i++) {
		// usamos j = i + 1 para ver apenas a parte de cima
		// assim, evitamos que as trocas dupliquem
		for (int j = i + 1; j < 4; j++) {
			int temp = m[i][j];
			m[i][j] = m[j][i];
			m[j][i] = temp;
		}
	}
}