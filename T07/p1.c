
#include <stdio.h>

int main() {
	int N, max = 0;

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		int x;
		scanf("%d", &x);
		if (x > max) {
			max = x;
		}
	}

	printf("%d", max);

	return 0;
}