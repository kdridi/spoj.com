#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int value;

    while (true) {
        fscanf(stdin, "%d\n", &value);
        if (value == 42)
            break;
        printf("%d\n", value);
    }

    exit(EXIT_SUCCESS);
}
