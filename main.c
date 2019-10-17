#include <stdio.h>

int main() {
    char s[20];
    printf("Let's talk \n");
    gets(s);
    printf("%s to you too! I am HAL, what is your first name? (one word, please) \n", s);
    gets(s);
    printf("Oh, Hi %s. How old are you?\n", s);
    int age;
    scanf("%d", &age);
    if(age <= 17)
    {
        printf("Oh, I'm so sorry you're not allowed to drink at your age. Say a funny thing.\n");
    }else if(age >= 18)
    {
        printf("So, being able to do anything you want is pretty fabulous. Say a funny thing.\n");
    }
    int c;
    while((c= getchar()) != '\n' && c != EOF);
    gets(s);
    printf("I'm sorry, but the processor needs to see me. By the way, I don't even know what "
           "'%s' actually means. Bye, hooman. \n", s);
    gets(s);
}