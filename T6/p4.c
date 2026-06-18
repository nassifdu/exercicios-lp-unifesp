
#include <stdio.h>

#define true "sim"
#define false "nao"

int main() {
	int n, sum = 0;
	
	scanf("%d", &n);

	for (int i = 1; i <= n - 1; i++) {
		// testa os divisores até n-1
		if (n % i == 0) {
			sum += i;
		}
	}

	if (n == sum) {
		printf("%s", true);
		return 0;
	} else {
		printf("%s", false);
		return 0;
	}
}
