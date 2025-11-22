#include <stdio.h>

/**
 * This program greets the user by name if a name is provided as a command-line
 * argument.
 * If no name is provided, it defaults to greeting "World".
 * @param argc The number of command-line arguments.
 * @param argv The array of command-line argument strings.
 * @return 0 on successful completion.
 * Usage:
 *   ./hello_you_too [name]
 *   If 'name' is provided, it will greet the user with that name.
 *   If no argument is given, it will greet "World".
 * Example:
 *   ./hello_you_too Alice
 *   Output: Hello, Alice!
 *   ./hello_you_too
 *   Output: Hello, World!
 */
int main(int argc, char **argv) {
  if (argc > 1) {
    printf("Hello, %s!\n", argv[1]);
  } else {
    printf("Hello, World!\n");
  }
  return 0;
}
