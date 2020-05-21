//Program for Celsius to Fahrenheit conversion

#include <stdio.h>

int main() {
    
    float fahr, celsius;
    printf("Enter the temperature in Celsius(°C): ");
    scanf("%f", &celsius);
    
    fahr = (celsius * 9.0 / 5.0) + 32.0;
    
    printf("\nTemperature in Fahrenheit: %.2f °F", fahr);
	
	return 0;
}

