#include <stdio.h>

int main() {
    int a;

    for (a = 0; a < 20; a++)
    {
        if (a % 2 == 1)
        {
            printf("The number is %d\n", a);
        }
    }
    printf("Loop finished");

    return 0;

}