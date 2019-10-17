#include <stdio.h>

int main() {
    char s[20];
    printf("%s", "Let's talk \n");
    gets(s);
    printf("%s%s", s, " to you too. What's your name? \n");
    gets(s);
    printf("%s%s%s", "It's a pleasure to meet you, ", s, ". Are you a boy or a girl? \n");
    gets(s);
}