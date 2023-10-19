#include <stdio.h>

int sum (float a, float b)
{
    float answer;
    answer = a + b;
    return answer;
}

int main ()
{
    float y = 2.21;
    float z = sum(5.45, y); 

    printf("The sum of 5.45 and %2.6f is %2.6f\n", &y, &z);
}