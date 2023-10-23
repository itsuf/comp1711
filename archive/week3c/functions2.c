#include <stdio.h>

float sum (float a, float b)
{
    float answer;
    answer = a + b;
    return answer;
}

float main ()
{
    float y = 2.21;
    float z = sum(5.45, y); 

    printf("The sum of 5.45 and %.2f is %.2f\n", y, z);
}