#include <stdio.h>

int main() {
    char expr[] = "a + b - c * d / e";
    for (int i = 0; expr[i] != '\0'; i++) {
        switch (expr[i]) {
            case '+': case '-': case '*': case '/':
                printf("Valid Arithmetic Operator: %c\n", expr[i]);
                break;
        }
    }
    return 0;
}
