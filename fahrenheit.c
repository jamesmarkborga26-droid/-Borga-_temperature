// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

    int main() {

    float fahrenheit, celsius;

        printf("Enter the Fahrenheit: ");
        scanf("%f", &fahrenheit);

        printf("Fahrenheit = %.2f\n", fahrenheit);

        celsius = (fahrenheit - 32) * 5/9;

        printf("Celsius = %.2f", celsius);
    
    return 0;
}
