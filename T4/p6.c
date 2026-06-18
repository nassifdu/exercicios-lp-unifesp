
#include <stdio.h>

int main() {
    double horaaula, horas, INSS, bruto, liquido;

    scanf("%lf %lf %lf", &horaaula, &horas, &INSS);
    bruto = horaaula * horas;
    liquido = (1 - (INSS/100)) * bruto;
    printf("%lf", liquido);

    return 0;
}
