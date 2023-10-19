#include <stdio.h>

int main() {
    int a = 20;

    while (a > 0)
    {
        if (a % 2 == 0)
        {
            printf("The number is %d\n", a);
        }
        
        a--;
    }

    return 0;

}