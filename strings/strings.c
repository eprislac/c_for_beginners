#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int string_length(const char* str);
char* string_concat(const char* str1, const char* str2);
bool string_compare(const char* str1, const char* str2);

int main() {
  const char* string1 = "Hello, ";
  const char* string2 = "World!";

  // Test string length
  printf("Length of string1: %d\n", string_length(string1));
  printf("Length of string2: %d\n", string_length(string2));

  // Test string concatenation
  char* concatenated = string_concat(string1, string2);
  printf("Concatenated string: %s\n", concatenated);
  free(concatenated);

  // Test string comparison
  const char* string3 = "Hello, World!";
  if (string_compare(concatenated, string3)) {
    printf("The strings are equal.\n");
  } else {
    printf("The strings are not equal.\n");
  }

  return 0;
}

int string_length(const char* str) {
  int length = 0;
  while (str[length] != '\0') {
    length++;
  }
  return length;
}

char* string_concat(const char* str1, const char* str2) {
  int len1 = string_length(str1);
  int len2 = string_length(str2);
  char* result = (char*)malloc(len1 + len2 + 1);
  for (int i = 0; i < len1; i++) {
    result[i] = str1[i];
  }
  for (int j = 0; j < len2; j++) {
    result[len1 + j] = str2[j];
  }
  result[len1 + len2] = '\0';
  return result;
}

bool string_compare(const char* str1, const char* str2) {
  int i = 0;
  while (str1[i] != '\0' && str2[i] != '\0') {
    if (str1[i] != str2[i]) {
        return false;
    }
    i++;
  }
  return str1[i] == str2[i];
}
