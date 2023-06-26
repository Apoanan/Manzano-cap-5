#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, q;

    for (n = 15; n <= 200; n++) {
        q = n * n;
        printf("%d\n", q);
    }

    return 0;
    system("pause");
}