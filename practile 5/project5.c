//Ankit kumar paswan 10214//
#include <stdio.h>

int main() {
    int choice, n, sum, i;

    while (1) {
        printf("\n--- MENU ---\n");
        printf("1. Print numbers 1-10\n");
        printf("2. Sum of n numbers\n");
        printf("3. Demonstrate break & continue\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Print numbers 1-10
                for (i = 1; i <= 10; i++) {
                    printf("%d\n", i);
                }
                break;

            case 2:
                // Sum of n numbers
                printf("Enter n: ");
                scanf("%d", &n);
                sum = 0;
                for (i = 1; i <= n; i++) {
                    sum += i;
                }
                printf("Sum = %d\n", sum);
                break;

            case 3:
                // Break & Continue demo
                printf("Loop from 1 to 10 (skip 5, stop at 8):\n");
                for (i = 1; i <= 10; i++) {
                    if (i == 5) continue;   // skip 5
                    if (i == 8) break;      // stop at 8
                    printf("%d\n", i);
                }
                break;

            case 4:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}