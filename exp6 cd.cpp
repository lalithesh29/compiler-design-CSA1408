#include <stdio.h>
#include <ctype.h>
#include <string.h>

int is_valid(const char *id) {
    if (!isalpha(id[0]) && id[0] != '_') return 0;
    for (int i = 1; id[i] != '\0'; i++) {
        if (!isalnum(id[i]) && id[i] != '_') return 0;
    }
    return 1;
}

int main() {
    char id1[] = "total_sum1", id2[] = "2nd_num";
    printf("'%s': %s\n", id1, is_valid(id1) ? "Valid" : "Invalid");
    printf("'%s': %s\n", id2, is_valid(id2) ? "Valid" : "Invalid");
    return 0;
}
