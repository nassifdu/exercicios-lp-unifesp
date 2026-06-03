
#include <stdio.h>

int main() {
	int N;

	scanf("%d", &N);

	int max, x;

	scanf("%d", &max); // primeiro elemento

	for (int i = 1; i < N; i++) {
		scanf("%d", &x);
		if (x > max) {
			max = x;
		}
	}

	printf("%d", max);

	return 0;
}