#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool is_prime(int value)
{
    if (value <= 1)
        return false;
    if (value <= 3)
        return true;
    if (value % 2 == 0 || value % 3 == 0)
        return false;
    for (int i = 5; i * i <= value; i += 6)
        if (value % i == 0 || value % (i + 2) == 0)
            return false;
    return true;
}

int main(void)
{
    int n_cases, n_prime_start, n_prime_end;

    scanf("%d\n", &n_cases);
    while (n_cases--) {
        scanf("%d %d\n", &n_prime_start, &n_prime_end);
        for (int n_prime = n_prime_start; n_prime <= n_prime_end; n_prime++) {
            if (is_prime(n_prime))
                printf("%d\n", n_prime);
        }
        printf("\n");
    }

    return 0;
}
