#include <stdio.h>

/*
TASK 3: Conditional Statements
Goal: if / else if / else + input validation.

TODOs:
1) Ask the user for an exam score (0 to 100).
2) If the score is outside 0..100, print "Invalid score" and exit.
3) Otherwise, print the grade:
   - 90..100: A
   - 80..89 : B
   - 70..79 : C
   - 60..69 : D
   - 0..59  : F
4) Bonus: If score is exactly 100, also print "Perfect score!"

*/

int main(void) {
    int score = -1;

    printf("Enter exam score (0-100): ");
    scanf("%d", &score);

    if (score < 0 || score > 100) {
        printf("Invalid score\n");
        return 1;
    }

    if (score >= 90) {
        printf("Grade: A\n");
        if (score == 100) {
            printf("Perfect score!\n");
        }
    } else if (score >= 80) {
        printf("Grade: B\n");
    } else if (score >= 70) {
        printf("Grade: C\n");
    } else if (score >= 60) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }
    
    return 0;
}
