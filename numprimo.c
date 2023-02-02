#include <stdio.h>
#include <stdbool.h>

bool é_primo(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main(void) {
    int n;
    printf("Qual número você quer verificar se é primo: ");
    scanf("%d", &n);
    if (é_primo(n)) {
        printf("%d é primo.\n", n);
    } else {
        printf("%d não é primo.\n", n);
    }
    return 0;
}
