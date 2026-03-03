#include <stdio.h>

/*
TASK 4: Loops
Goal: for + while + simple algorithms.

TODOs:
1) Ask the user for a positive integer n.
   - Keep asking until user enters n > 0 (use a loop).
2) Print numbers from 1 to n (for loop).
3) Compute and print:
   - sum from 1..n
4) Compute and print:
   - factorial of n (n!)
   Note: factorial grows fast; use unsigned long long.

Hints:
- Input loop can be while(n <= 0)
- Factorial:
  fact = 1;
  for(i=1; i<=n; i++) fact *= i;
*/

int main(void) {
  int n = 0;
  int rc;
  while (1) {
    printf("Enter a positive integer n (> 0): ");
    rc = scanf("%d", &n);

    if (rc != 1) {
      printf("Invalid input. Please enter a valid integer.\n");
      while (getchar() != '\n');
      continue;
    }

    if (n <= 0) {
      printf("Please enter a number greater than 0.\n");
      continue;
    }

    break;
  }

  printf("\n=== Counting ===\n");

  for (int i = 1; i <= n; i++) {
    printf("%d ", i);
  }
  printf("\n");

  printf("\n=== Sum 1..n ===\n");

  unsigned long long sum = 0;

  for (int i = 1; i <= n; i++) {
    sum += i;
  }

  printf("Sum: %llu\n", sum);
  printf("\n=== Factorial n! ===\n");

  unsigned long long factorial = 1;

  for (int i = 1; i <= n; i++) {
    factorial *= i;
  }

  printf("Factorial: %llu\n", factorial);
  return 0;
}
