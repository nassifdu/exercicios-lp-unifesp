
// estatísticas recursivas

#include <stdio.h>

int somaRec(int v[], int n) {
    if (n == 0) return 0;
    return v[n - 1] + somaRec(v, n - 1);
}

int maiorRec(int v[], int n) {
    if (n == 1) return v[0];
    int m = maiorRec(v, n - 1);
    return v[n - 1] > m ? v[n - 1] : m;
}

int contaParesRec(int v[], int n) {
    if (n == 0) return 0;
    return (v[n - 1] % 2 == 0) + contaParesRec(v, n - 1);
}

int contaValorRec(int v[], int n, int x) {
    if (n == 0) return 0;
    return (v[n - 1] == x) + contaValorRec(v, n - 1, x);
}

int main() {
    int n, x;
    scanf("%d", &n);

    int v[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &v[i]);

    scanf("%d", &x);

    printf("%d\n", somaRec(v, n));
    printf("%d\n", maiorRec(v, n));
    printf("%d\n", contaParesRec(v, n));
    printf("%d\n", contaValorRec(v, n, x));

    return 0;
}
