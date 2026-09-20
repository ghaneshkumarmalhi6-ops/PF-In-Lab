#include <stdio.h>

int main() {
    int marks;

    printf("Enter student's marks: ");
    scanf("%d", &marks);

    (marks >= 50) ? printf("Pass\n") : printf("Fail\n");

    return 0;
}
