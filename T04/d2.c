
#include <stdio.h>

int main() {
    int qtd, final, alugadas, estragadas, repostas;
    double aluguel, aluguelMultado, multa = 0.1;

    scanf("%d %lf", &qtd, &aluguel);

    // faturamento (1/3 das fitas)
    alugadas = qtd / 3;
    printf("%lf\n", alugadas * aluguel);

    // multa (10% sobre aluguel; 1/10 das alugadas são multadas)
    printf("%lf\n", (alugadas / 10) * (aluguel * multa));

    // reposição (2% das fitas; 0.2% são repostas)
    estragadas = qtd * 0.02;
    repostas = estragadas / 10;
    final = qtd - estragadas + repostas;
    printf("%d", final);

    return 0;
}
