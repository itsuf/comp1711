#include <stdio.h>

float fahr_to_celsius (float temp)
{
    float answer;
    answer = (temp - 32) / (1.8);
    return answer;
}

float fahr_to_kelvin (float temp)
{
    float answer;
    float kelvin = 273.15;
    answer = (temp - 32) / (1.8) + kelvin;
    return answer;
}

float fahr_to_newton (float temp)
{
    float answer;
    float newton = 5.4545455515;
    answer = (temp - 32) / newton;
    return answer;
}

int main ()
{
    float temperature = 32;
    float converted;

    char conversion;
    printf("Enter C for conversion to celsius, K for kelvin or N for newton.\n");
    scanf("%c", &conversion);


    switch ( conversion ) 
    {

        case 'C' :
            converted = fahr_to_celsius(temperature);
            break;
        case 'K' :
            converted = fahr_to_kelvin(temperature);
            break;
        case 'N' :
            converted = fahr_to_newton(temperature);
            break;
        default :
            break;

    }

    printf("%.2f F converted to %c is %.2f %c\n", temperature, conversion, converted, conversion);

}