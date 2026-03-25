#include <stdio.h>

int main() {
    int a = 10, b = 3;
    float c;

    c = (float)a / b;

    printf("Integer Division = %d\n", a/b);
    printf("Float Division = %.2f\n", c);
    printf("Modulus = %d", a%b);

    return 0;
}