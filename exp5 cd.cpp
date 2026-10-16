#include <stdio.h>

int main() {
    char str[] = "Hello World!\nWelcome\tto C\nprogramming.";
    int spaces = 0, newlines = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\t') spaces++;
        else if (str[i] == '\n') newlines++;
    }

    printf("Whitespaces (Spaces/Tabs): %d\n", spaces);
    printf("Newline Characters: %d\n", newlines);
    return 0;
}
