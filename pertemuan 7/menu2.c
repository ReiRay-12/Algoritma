#include <stdio.h>

int main() {
    int choice;

    printf("=== MENU ===\n");
    printf("1. Iced tea\n");
    printf("2. Orange Juice\n");
    printf("3. Coffee\n");
    printf("4. Milk\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You ordered Iced Tea\n");
            printf("Rp. 5.000");
            break;
        case 2:
            printf("You ordered Orange Juice\n");
            printf("Rp. 7.000");
            break;
        case 3:
            printf("You ordered Coffee\n");
            printf("Rp. 10.000");
            break;
        case 4:
            printf("You ordered Milk\n");
            printf("Rp. 12.000");
            break;
        default:
            printf("Invalid menu code!");
    }

    return 0;
}