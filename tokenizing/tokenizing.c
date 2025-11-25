#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

bool search_string(const char* haystack, const char* needle);
int tokenize_string(const char* str, const char* delim);

int main(int argc, char* argv[]) {
    if (argc != 3) {
        printf("Usage: %s <haystack> <needle>\n", argv[0]);
        return 1;
    }

    const char* haystack = argv[1];
    const char* needle = argv[2];

    if (search_string(haystack, needle)) {
        printf("The string \"%s\" was found in \"%s\".\n", needle, haystack);
    } else {
        printf("The string \"%s\" was not found in \"%s\".\n", needle, haystack);
    }
    const char* str_to_tokenize = "This,is,a,sample,string,to,tokenize";
    const char* delimiter = ",";
    int token_count = tokenize_string(str_to_tokenize, delimiter);
    printf("Total tokens found: %d\n", token_count);

    return 0;
}

bool search_string(const char* haystack, const char* needle) {
    char *pFound = strstr(haystack, needle);
    return (pFound != NULL);
}

int tokenize_string(const char* str, const char* delim) {
    char* str_copy = strdup(str);
    char* token = strtok(str_copy, delim);
    int count = 0;

    while (token != NULL) {
        printf("Token %d: %s\n", count + 1, token);
        count++;
        token = strtok(NULL, delim);
    }

    free(str_copy);
    return count;
}
