#include <stdio.h>

int main() {

    int mark = 37;

    if (mark >= 40)
    {
        printf("The mark of %d is a pass \n", mark);
    }
    else if (mark < 40)
    {
        printf("The mark of %d is a fail\n", mark);
    }
    else
    {
        printf("The mark of %d is a pass\n", mark);
    }
    
    return 0;
}