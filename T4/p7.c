
#include <stdio.h>

int main() {
    double h, r;
    const double PI = 3.14;

    scanf("%lf %lf", &h, &r);
    printf("%lf", PI * h * r * r);

    return 0;
}
