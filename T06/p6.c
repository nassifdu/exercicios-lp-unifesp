
#include <stdio.h>

#define MAX 100

int main() {
    int jogos, saldo = 0, maxDerGols = 0, maxVitGols = 0, 
    analisadas = 0, vitorias = 0, empates = 0, derrotas = 0;

    // ler nº de jogos
    scanf("%d", &jogos);

    // ler pontuações
    for(int i = 0; i < MAX; i++) {
        // placar de A
        int a;
        scanf("%d", &a);

        // parada no -1
        if (a == -1) {
            break;
        }

        // placar de B
        int b;
        scanf("%d", &b);

        // análise completa
        analisadas += 1;

        // saldo de gols
        saldo += a;
        saldo -= b;    
    
        // vitorias, empates, derrotas
        if (a > b) {
            // vitoria
            vitorias += 1;

            // atualizar maxVitGols
            if (a > maxVitGols) {
                maxVitGols = a;
            }
        }
        else if (a < b) {
            // derrota
            derrotas += 1;

            // atualizar maxDerGols
            if (b > maxDerGols) {
                maxDerGols = b;
            }
        }
        else { // a == b
            empates += 1;
        }
    }

    // analisadas
    printf("%lf\n", (100.0 * analisadas) / jogos);

    // vitorias, empates, derrotas
    
    printf("%lf\n", (100.0 * vitorias) / analisadas);
    printf("%lf\n", (100.0 * empates) / analisadas);
    printf("%lf\n", (100.0 * derrotas) / analisadas);

    // saldo, max gols em derrotas, max gols em vitorias

    printf("%d\n", saldo);
    
    if (maxDerGols == 0) {
        printf("Nao houve derrotas.\n");
    }
    else {
        printf("%d\n", maxDerGols);
    }

    if (maxVitGols == 0) {
        printf("Nao houve vitorias.");
    }
    else {
        printf("%d", maxVitGols);
    }
    
    return 0;
}
