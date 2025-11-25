#include<stdio.h>
#include<string.h>

char* rev_str(char* str);
char* sort_str(char* str);

int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf("Usage: %s <string>\n", argv[0]);
        return 1;
    }

    char str1[100];
    char str2[100];

    strcpy(str1, argv[1]);
    strcpy(str2, argv[1]);

    printf("Original String: %s\n", argv[1]);
    printf("Reversed String: %s\n", rev_str(str1));
    printf("Sorted String: %s\n", sort_str(str2));

    return 0;
}

char* rev_str(char* str) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
    return str;
}

char* sort_str(char* str) {
    int n = strlen(str);
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
    return str;
}
