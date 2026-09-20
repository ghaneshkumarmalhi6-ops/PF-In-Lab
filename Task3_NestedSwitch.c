#include <stdio.h>

int main() {
    int department, section;

    printf("Select Department:\n");
    printf("1. Computer Science\n");
    printf("2. Information Technology\n");
    printf("3. Artificial Intelligence\n");
    printf("Enter choice: ");
    scanf("%d", &department);

    switch (department) {

        case 1:
            printf("Computer Science selected.\n");

            printf("Select Section:\n");
            printf("1. Section A\n");
            printf("2. Section B\n");
            scanf("%d", &section);

            switch (section) {
                case 1:
                    printf("Department: Computer Science\n");
                    printf("Section: A\n");
                    break;

                case 2:
                    printf("Department: Computer Science\n");
                    printf("Section: B\n");
                    break;

                default:
                    printf("Invalid section choice.\n");
            }
            break;

        case 2:
            printf("Information Technology selected.\n");

            printf("Select Section:\n");
            printf("1. Section A\n");
            printf("2. Section B\n");
            scanf("%d", &section);

            switch (section) {
                case 1:
                    printf("Department: Information Technology\n");
                    printf("Section: A\n");
                    break;

                case 2:
                    printf("Department: Information Technology\n");
                    printf("Section: B\n");
                    break;

                default:
                    printf("Invalid section choice.\n");
            }
            break;

        case 3:
            printf("Artificial Intelligence selected.\n");

            printf("Select Section:\n");
            printf("1. Section A\n");
            printf("2. Section B\n");
            scanf("%d", &section);

            switch (section) {
                case 1:
                    printf("Department: Artificial Intelligence\n");
                    printf("Section: A\n");
                    break;

                case 2:
                    printf("Department: Artificial Intelligence\n");
                    printf("Section: B\n");
                    break;

                default:
                    printf("Invalid section choice.\n");
            }
            break;

        default:
            printf("Invalid department choice.\n");
    }

    return 0;
}
