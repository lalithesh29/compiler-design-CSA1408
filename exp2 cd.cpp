#include <stdio.h>
#include <string.h>

void check_comment(const char *line) {
    while (*line == ' ' || *line == '\t') line++; // Skip leading spaces

    if (strncmp(line, "//", 2) == 0)
        printf("Single-line comment (//)\n");
    else if (strncmp(line, "/*", 2) == 0)
        printf("Multi-line comment start (/*)\n");
    else
        printf("Not a comment line\n");
}

int main() {
    check_comment("   // This is a comment");
    check_comment("int a = 5;");
    return 0;
}
