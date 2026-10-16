#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char code[] = "val1 = 105 + rate * 42.5;";
    int i = 0, len = strlen(code);

    while (i < len) {
        if (isspace(code[i])) { i++; continue; }

        if (isalpha(code[i]) || code[i] == '_') {
            char id[32]; int k = 0;
            while (i < len && (isalnum(code[i]) || code[i] == '_')) {
                if (k < 31) id[k++] = code[i];
                i++;
            }
            id[k] = '\0';
            printf("[Identifier]: %s\n", id);
        } else if (isdigit(code[i])) {
            char num[32]; int k = 0;
            while (i < len && (isdigit(code[i]) || code[i] == '.')) num[k++] = code[i++];
            num[k] = '\0';
            printf("[Constant]  : %s\n", num);
        } else if (strchr("+-/*=", code[i])) {
            printf("[Operator]  : %c\n", code[i++]);
        } else { i++; }
    }
    return 0;
}
