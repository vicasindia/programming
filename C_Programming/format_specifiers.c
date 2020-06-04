#include <stdio.h> 
  
int main() {
    
    printf("Format Specifiers:\n\n");

    //printing character data 
    char ch = 'V';
    printf("%c\n", ch);
    printf("--------------------------------\n");
    
    //printing decimal or integer data with d and i
    int x = 45, y = 90;
    printf("%d\n", x);
    printf("%5d\n", x);
    printf("%-5d\n", x);
    printf("%i\n", y);
    printf("--------------------------------\n");
    
    //printing float value
    float f = 12.671;
    printf("%f\n", f);
    printf("%12f\n", f);
    printf("%.4f\n", f);
    printf("%.2f\n", f);
    printf("%-5f\n", f);
    printf("%-.5f\n", f);
    printf("%-.2f\n", f);
    printf("%6.3f\n", f);
    printf("%e\n", f);   //print in scientific notation
    printf("--------------------------------\n");
    
    int a = 67;
    printf("%o\n", a);   //printing in octal format
    
    printf("%x\n", a);   //printing in hexadecimal format
    
    printf("--------------------------------\n");
    
    char str[] = "Hello World";
    printf("%s\n", str);         //priting string constant
    
    printf("%20s\n", str);       //shift to the right 20 characters including the string
    printf("%-20s\n", str);      //left align
    printf("%20.5s\n", str);     //shift to the right 20 characters including the string, and print string up to 5 character 
    printf("%-20.5s\n", str);    //left align and print string up to 5 character

    return 0;
}

