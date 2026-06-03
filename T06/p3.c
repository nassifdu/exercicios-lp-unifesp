
#include <stdio.h>

#define true "sim"
#define false "nao"

int multiplyThreeConsecutives(int n) {
	return n * (n + 1) * (n + 2);
}

int main() {
	int n;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		int C = multiplyThreeConsecutives(i);

		if (C == n) {
			printf("%s", true);
			return 0;
		}
		if (C > n) {
			printf("%s", false);
			return 0;
		}
	}

	printf("%s", false);
	return 0;
}