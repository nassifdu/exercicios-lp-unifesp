
// inserir

#include <stdio.h>

void inserirOrdenado(int v[], int *n, int capacidade, int valor) {
   if (*n >= capacidade) return;

   int pos = 0;
   while (pos < *n && v[pos] < valor)
       pos++;

   for (int i = *n; i > pos; i--)
       v[i] = v[i - 1];

   v[pos] = valor;
   (*n)++;
}

int main() {
   int capacidade, n, valor;

   scanf("%d %d", &capacidade, &n);

   int v[capacidade];
   for (int i = 0; i < n; i++)
       scanf("%d", &v[i]);

   scanf("%d", &valor);
   inserirOrdenado(v, &n, capacidade, valor);

   for (int i = 0; i < n; i++)
       printf("%d ", v[i]);

   return 0;
}
