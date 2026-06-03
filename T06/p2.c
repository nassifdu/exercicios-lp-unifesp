
#include <stdio.h>
#include <math.h>

#define true "sim"
#define false "nao"

int main() {
	int n;

	scanf("%d", &n);

	// se sqrt(n) não tem nenhum divisor além de 1, n também não terá,
	// pois a multiplicação máxima é sqrt(n) * sqrt(n) (depois disso fica maior que n).
	// então só precisamos verificar até sqrt(n)
	// logo queremos dividir por 1 até sqrt(n) 

	if (n <= 1) {
		// n triviais: iguais a 1, menores que 1
		printf("%s", false);
		return 0;
	}

	if (n == 2 || n == 3) {
		// n triviais: 2 e 3
		printf("%s", true);
		return 0;
	}

	if (n % 2 == 0 || n % 3 == 0) {
		// n triviais: múltiplos de 2 ou 3
		printf("%s", false);
		return 0;
	}

	// queremos ver i até sqrt(n), ou seja, ver i*i até n
	// todo primo é da forma 6k+1 ou 6k-1 com k natural
	// como começamos em i=5, checaremos n % i e n % (i+2)
	for (int i = 5; i * i <= n; i += 6) {
		if (n % i == 0 || n % (i + 2) == 0) {
			printf("%s", false);
			return 0;
		}
	}

	printf("%s", true);
	return 0;
}