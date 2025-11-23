#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
  int number, guess, attempts = 0;
  time_t t;
  srand((unsigned) time(&t)); // Seed the random number generator
  number = ( rand() % 20 ) + 1; // Random number between 1 and 20
  printf("Welcome to 'Guess the Number'!\n");
  printf("I have selected a number between 1 and 20. Can you guess it?\n");
  do {
      
      printf("Enter your guess: ");
      scanf("%d", &guess);
      attempts++;
      if ( ( guess < 1 ) || ( guess > 20 ) ) {
          printf("Please guess a number between 1 and 20.\n");
          continue;
      }
      if ( attempts > 4 && guess != number ) {
          printf("No more guesses, the number was %d. You lose! Try again soon!\n", number);
          return 0;
      }
      if(guess < number) {
          printf("Too low! Try again.\n");
      } else if(guess > number) {
          printf("Too high! Try again.\n");
      } else {
          printf("Congratulations! You've guessed the number %d in %d attempts.\n", number, attempts);
      }
  } while(guess != number);
  return 0;
}
