//Program for Fahrenheit to Celsius conversion

#include <stdio.h>

int main()
{    
    float fahr, celsius;
	
    printf("Enter the temperature in Fahrenheit(°F): ");
    scanf("%f", &fahr);
    
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    
    printf("\nTemperature in Celsius: %.2f °C", celsius);
	
	return 0;
}

