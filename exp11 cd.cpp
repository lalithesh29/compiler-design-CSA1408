#include <stdio.h>
#include <string.h>

struct Symbol {
    char name[31];
    char type[10];
} symbol_table[10];

int count = 0;

void insert(const char *name, const char *type) {
    strcpy(symbol_table[count].name, name);
    strcpy(symbol_table[count].type, type);
    count++;
}

void display() {
    printf("\n--- SYMBOL TABLE ---\n");
    printf("Name\t\tType\n");
    for (int i = 0; i < count; i++) {
        printf("%s\t\t%s\n", symbol_table[i].name, symbol_table[i].type);
    }
}

int main() {
    insert("count", "int");
    insert("rate", "float");
    display();
    return 0;
}
