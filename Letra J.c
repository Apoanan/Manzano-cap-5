#include <stdio.h>

int main() {
    int celsius;

    printf("Conversão de graus Celsius para graus Fahrenheit:\n");
 
    printf("Celsius \t Fahrenheit\n");
    for (celsius = 10; celsius <= 100; celsius += 10) {
        float fahrenheit = (celsius * 9 / 5.0) + 32;
        printf("%d \t\t %.2f\n", celsius, fahrenheit);
    }
    return 0;
}