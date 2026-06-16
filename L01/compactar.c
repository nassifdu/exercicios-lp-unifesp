#include <stdio.h>

void compactarVetor(int v[], int *n) {
    int i, j = 0;

    for (i = 0; i < *n; i++) {
        if (v[i] != 0) {
            v[j] = v[i];
            j++;
        }
    }

    *n = j;
}

int main() {
   int n;

	scanf("%d", &n);
	
	int v[n];
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &v[i]);
	}

   compactarVetor(v, &n);

   for (int i = 0; i < n; i++) {
	printf("%d ", v[i]);
   }

   printf("\nnovo n: %d", n);

   return 0;
}
