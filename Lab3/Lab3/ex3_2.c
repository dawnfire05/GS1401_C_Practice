#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char ch;
    int a = 0;
    int e = 0;
    int i = 0;
    int o = 0;
    int u = 0;
    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n') {
        switch (ch) {
            case 'A':
            case 'a':
                ++a;
                break;
            case 'E':
            case 'e':
                ++e;
                break;
            case 'I':
            case 'i':
                i++;
                break;
            case 'O':
            case 'o':
                o++;
                break;
            case 'U':
            case 'u':
                u++;
                break;
        }
    }
    printf("The number of 'A' or 'a' is %d\n", a);
    printf("The number of 'E' or 'e' is %d\n", e);
    printf("The number of 'I' or 'i' is %d\n", i);
    printf("The number of 'O' or 'o' is %d\n", o);
    printf("The number of 'U' or 'u' is %d\n", u);

}