#include<stdio.h>
#include<string.h>

int main() {
    char str[] = "Hello World";
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        printf("%c ", str[i]);
    }

    return 0;
}
