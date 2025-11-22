#include <stdio.h>

/***
 * This program checks if the user is eligible to vote based on their age.
 * The legal voting age is 18 years.
 * It prompts the user to enter their age and then displays whether they are
 * eligible to vote or not.
 * @return 0 on successful completion.
 * Usage:
 *   Compile the program and run the executable.
 *   Enter your age when prompted.
 * Example:
 *   Input: 20
 *   Output: You are eligible to vote.
 *   Input: 16
 *   Output: You are not eligible to vote.
 */
int main() {
  // Variable to store user's age
  int age;
  // Prompt user for their age
  printf("How old are you?: ");
  // Read user input
  scanf("%d", &age);

  if (age >= 18) {
    printf("You are eligible to vote.\n");
  } else {
    printf("You are not eligible to vote.\n");
  }
  return 0;
}
