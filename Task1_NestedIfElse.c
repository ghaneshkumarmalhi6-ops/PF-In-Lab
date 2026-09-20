#include <stdio.h>

int main() {
    int age, marks;

    printf("Enter student's age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("Enter student's marks: ");
        scanf("%d", &marks);

        if (marks >= 50) {
            printf("Eligible for Admission\n");
        } else {
            printf("Not Eligible: Marks are below 50\n");
        }
    } else {
        printf("Not Eligible: Age is below 18\n");
    }

    return 0;
}
