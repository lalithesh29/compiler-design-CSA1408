#include <stdio.h>

int main() {
    char str[] = "int   x = 5; \n // skip this\n y = 10; /* skip */ z = 20;";
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') { i++; continue; }
        
        if (str[i] == '/' && str[i + 1] == '/') {
            while (str[i] != '\n' && str[i] != '\0') i++;
            continue;
        }
        if (str[i] == '/' && str[i + 1] == '*') {
            i += 2;
            while (str[i] != '\0' && !(str[i] == '*' && str[i + 1] == '/')) i++;
            if (str[i] != '\0') i += 2;
            continue;
        }
        putchar(str[i++]);
    }
    return 0;
}
