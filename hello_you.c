#include <stdio.h>

int main() {
  // c std lib does not have strings, so we use char arrays.
  char name[100];
  // prompt user for their name
  printf("Enter your name: ");
  // print a greeting to the user, by name
  fgets(name, sizeof(name), stdin);
  printf("Hello, %s! \n", name);
  return 0;
}
