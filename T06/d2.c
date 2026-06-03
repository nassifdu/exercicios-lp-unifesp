
#include <stdio.h>

#define MAX 100

int main() {
    int CANAIS[MAX], canal, aud, audTotal = 0;

    for (int i = 0; i < MAX; i++) {
    	CANAIS[i] = -1;
    }

    while (1) {
        scanf("%d", &canal);

        if (canal == 0) {
        	break;
        }
        scanf("%d", &aud);

        if (CANAIS[canal] == -1) {
            CANAIS[canal] = aud;
        }
        else {
            CANAIS[canal] += aud;
        }

        audTotal += aud;
    }

    for (int i = 0; i < MAX; i++) {
        if (CANAIS[i] != -1) {
            printf("%d %lf\n", i, (CANAIS[i] * 100.0) / audTotal);
        }
    }

    return 0;
}