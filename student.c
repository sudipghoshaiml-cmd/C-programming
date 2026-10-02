#include <stdio.h>

int main() {
    int roll;
    char name[50];

    printf("Enter student roll: ");
    scanf("%d", &roll);

    printf("Enter student name: ");
    scanf("%49s", name);

    printf("\n--- Student Details ---\n");
    printf("Roll: %d\n", roll);
    printf("Name: %s\n", name);

    return 0;
}
