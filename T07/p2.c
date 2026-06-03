
#include <stdio.h>

#define MAX 100

int main() {
	// número de números e lista de aparições de cada número
	int N, num[MAX], freq[MAX] = {0};

	scanf("%d", &N);	

	// inicializar num com -1 em todos
	for (int i = 0; i < MAX; i++) {
		num[i] = -1;
	}

	for (int i = 0; i < N; i++) {
		int n;
		scanf("%d", &n);

		// se n igual a algum num_j -> freq_j++
		for (int j = 0; j < N; j++) {
			if (n == num[j]) {
				freq[j]++;
				// se acharmos o número, aumentamos freq
				// e não precisamos continuar procurando;
				// há apenas uma aparição de cada número
				break;
			}
			// se o número não está na lista,
			// devemos adicioná-lo e inicializar
			if (num[j] == -1) {
				num[j] = n;
				freq[j] = 1;
				break;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		if (num[i] != -1) {
			printf("%d %d\n", num[i], freq[i]);
		}
	}

	return 0;
}