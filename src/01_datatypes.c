#include <stdio.h>

/*
TASK 1: Data Types
Goal: Practice basic C types and printing.

TODOs:
1) Print the size (in bytes) of:
   - int, long, long long, float, double, char
2) Ask the user for:
   - age (int)
   - height in meters (double)
   - first letter of their name (char)
3) Print the values back in a nice sentence.

Hints:
- Use sizeof(type)
- Use scanf carefully:
  - int: %d
  - double: %lf
  - char: " %c" (notice space before %c to skip newline)
*/

int main(void) {
    // TODO 1: Print sizes
    printf("=== Sizes of Data Types (bytes) ===\n");
    // Example:
    // printf("int: %zu\n", sizeof(int));
   printf("int: %zu\n", sizeof(int));
   printf("long: %zu\n", sizeof(long));
   printf("long long: %zu\n", sizeof(long long));
   printf("float: %zu\n", sizeof(float));
   printf("double: %zu\n", sizeof(double));
   printf("char: %zu\n", sizeof(char));

    // TODO 2: Read input from user
    int age = 0;
    double height = 0.0;
    char firstLetter = '?';

    printf("\nEnter your age: ");
   if (scanf("%d", &age) != 1) return 1;

    printf("Enter your height in meters (e.g., 1.72): ");
   if (scanf("%lf", &height) != 1) return 1;

    printf("Enter the first letter of your name: ");
   if (scanf(" %c", &firstLetter) != 1) return 1;

    // TODO 3: Print summary
    printf("\n=== Summary ===\n");
   printf("%c is %d years old and %.2f meters tall.\n", firstLetter, age, height);

    return 0;
}
