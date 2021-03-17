#include <stdio.h>
int main() {
    int n, i;
    unsigned long long fact = 1;
    printf("Inserte un numero: ");
    scanf("%d", &n);

    // shows error if the user enters a negative integer
    if (n < 0)
        printf("Intente con un numero valido");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("El factorial es %llu", fact);
    }

    return 0;
}
