#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
TASK 5: Command Line
Goal: Use argc/argv.

Program usage:
  ./cmd <operation> <num1> <num2>

Where <operation> is one of:
  add, sub, mul, div

Examples:
  ./cmd add 10 5   -> 15
  ./cmd div 10 2   -> 5

TODOs:
1) If arguments are missing, print usage instructions and exit.
2) Read operation string (argv[1]) and two integers (argv[2], argv[3]).
   - Use strtol instead of atoi (better).
3) Do the operation and print result.
4) For division: handle division by zero.
5) If operation is unknown: print "Unknown operation".

Hint:
- Use strcmp(op, "add") == 0
*/

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Usage: %s <operation> <num1> <num2>\n", argv[0]);
        printf("Where <operation> is one of: add, sub, mul, div\n");
        return 1;
    }
    

    char *op = argv[1];
    char *endptr;
    long a = strtol(argv[2], &endptr, 10);
    (void)endptr;
    long b = strtol(argv[3], &endptr, 10);
    (void)endptr;
    
    if (strcmp(op, "add") == 0) {
      printf("%ld\n", a + b);
    } else if (strcmp(op, "sub") == 0) {
      printf("%ld\n", a - b);
    } else if (strcmp(op, "mul") == 0) {
      printf("%ld\n", a * b);
    } else if (strcmp(op, "div") == 0) {
      if (b == 0) {
        printf("Error: Division by zero\n");
        return 1;
      }
      printf("%ld\n", a / b);
    } else {
      printf("Unknown operation\n");
      return 1;
    }

    return 0;
}
