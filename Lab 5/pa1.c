#include <stdio.h>
void main() {
    float feet, inches;
    printf("Enter length in feet: ");
    scanf("%f", &feet);
    inches = feet * 12;
    printf("Length in inches = %f", inches);
}