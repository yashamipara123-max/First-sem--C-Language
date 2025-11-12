#include <stdio.h>
void main() {
    int marks[5], i, total = 0;
    float percentage;

    printf("Enter marks for 5 subjects:\n");
    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    percentage = (float)total / 5;

    printf("\nTotal Marks = %d\n", total);
    printf("Percentage = %f\n", percentage);

    if (percentage < 35)
        printf("Class: Fail\n");
    else if (percentage <= 45)
        printf("Class: Pass Class\n");
    else if (percentage <= 60)
        printf("Class: Second Class\n");
    else if (percentage <= 70)
        printf("Class: First Class\n");
    else
        printf("Class: Distinction\n");
}