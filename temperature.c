#include <stdio.h>
main()
{
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%.2f Celsius =\n %.2f Fahrenheit\n", celsius, fahrenheit);

    
}
