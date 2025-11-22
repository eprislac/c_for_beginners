#include "isheboth.h"
#include <stdio.h>

int main(int argc, char** argv) {
  while (argc-- > 1) {
    int i = atoi(argv[argc]);
    char* result = isheboth(i);
    printf("%s\n", result);
    // Free the allocated memory if it's not a static string}
    if (result[0] != 'F' && result[0] != 'B') {
      free(result);
    }
  }
  return 0;
}
