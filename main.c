#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/// It's amazing box!

int main(int argc, char *argv[]) {
    system("chcp 65001");

    printf("Введите строку :");
    char s[80];
    fgets(s, 80, stdin);
    for (short i = 0; strlen(s) > i; i++) {
        if (s[i] == 'a') s[i] = 'A';
        if (s[i] == 'b') s[i] = 'B';
    }
    printf("Строка :%s\n", s);

    return 0;
}
