#include <stdio.h>

/*
TASK 6: Magic Numbers
Goal: Remove "random numbers" from code and replace them with named constants.

PROBLEM:
This program calculates a final course score.
But it uses lots of "magic numbers" (like 0.4, 0.6, 50, 100).

TODOs:
1) Create named constants for:
   - QUIZ_WEIGHT (example: 0.40)
   - EXAM_WEIGHT (example: 0.60)
   - PASS_SCORE (example: 50)
   - MIN_SCORE (0)
   - MAX_SCORE (100)
2) Use those constants instead of raw numbers.
3) Validate inputs (0..100).
4) Print:
   - Final score (as a double with 2 decimals)
   - PASS/FAIL based on PASS_SCORE

Extra (optional):
- If final score >= 90, print "Excellent"
- If final score < 50, print "Needs improvement"
*/

int main(void) {
   const int QUIZ_WEIGHT = 40; // percentage
   const int EXAM_WEIGHT = 60; // percentage
   const int PASS_SCORE = 50;
   const int MIN_SCORE = 0;
   const int MAX_SCORE = 100;

   double quiz = 0.0;
   double exam = 0.0;

   printf("Enter quiz score (0-100): ");
   scanf("%lf", &quiz);

   printf("Enter exam score (0-100): ");
   scanf("%lf", &exam);
   
   if (quiz < MIN_SCORE || quiz > MAX_SCORE || exam < MIN_SCORE || exam > MAX_SCORE) {
      printf("Error: Scores must be between %d and %d.\n", MIN_SCORE, MAX_SCORE);
      return 1;
   }
   
   double final_score = quiz * QUIZ_WEIGHT / 100.0 + exam * EXAM_WEIGHT / 100.0;

   printf("\nFinal score: %.2f\n", final_score);

   if (final_score >= PASS_SCORE) {
      printf("Result: Pass\n");
   } else if (final_score >= 90) {
      printf("Result: Excellent\n");
   } else {
      printf("Result: Needs Improvement\n");
   }
   
   return 0;
}
