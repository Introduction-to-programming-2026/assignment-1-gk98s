#include <stdio.h>

/*
TASK 2: Operators
Goal: Use arithmetic + comparison + logical operators.

TODOs:
1) Ask the user for two integers a and b.
2) Print:
   - a + b, a - b, a * b
   - a / b (integer division) AND a % b (remainder)
     - If b == 0, do not divide (print a warning).
3) Compare a and b and print:
   - "a is greater", "b is greater", or "they are equal"
4) Logical checks:
   - Print if BOTH numbers are positive
   - Print if AT LEAST ONE number is negative

Hints:
- Comparisons: > < == !=
- Logical: && || !
*/

int main(void) {
    int a = 0, b = 0;

    printf("Enter integer a: ");
    scanf("%d", &a);
    // TODO: scanf a
    printf("Enter integer b: ");
    // TODO: scanf b
    scanf("%d", &b);

    printf("\n=== Arithmetic ===\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);

    if (b != 0) {
      printf("a / b (integer) = %d\n", a / b);
      printf("a / b (float) = %f\n", (double)a / (double)b);
        printf("a %% b = %d\n", a % b);
    } else {
        printf("Cannot divide by zero.\n");
    }

    printf("\n=== Comparison ===\n");
    if (a > b) {
        printf("a is greater\n");
    } else if (b > a) {
        printf("b is greater\n");
    } else {
        printf("they are equal\n");
    }

    printf("\n=== Logical checks ===\n");
    if (a > 0 && b > 0) {
        printf("Both numbers are positive.\n");
    }
    if (a < 0 || b < 0) {
        printf("At least one number is negative.\n");
    }

    return 0;
}
