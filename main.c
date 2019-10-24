#include <stdio.h>
#include <string.h>

int main() {
    char name[20], word[20], choice[20], joke[20], *p; int age;
    printf("Hello, human, please tell me your name.\n");
    gets(name);
    printf("Well, hello there, %s, my name is Computario and I guess that you are my new friend. It's getting lonelier and lonelier in here."
           "What about you? What is your age?\n", name);
    scanf("%d", &age);
    /// scanf-gets problem
    int c;
    while((c= getchar()) != '\n' && c != EOF);
    ///
    if(age >= 18)
    {
        printf("Wow. You are an adult. I am only 5 months old. It's pretty boring in here. Can you tell me a word you like?\n");
    }else printf("I am also less than 18 years old. I am only 5.  It's pretty boring in here. Can you tell me a word you like?\n");
    gets(word);
    printf("I actually do not know what %s means. Can you tell me please?\n", word);
    gets(word);
    printf("Okay, that is really interesting. I took that definition and put it in my dictionary. So '%s'. Okay.\n");
    printf("%s, let me tell you a joke. Can I?\n", name);
    gets(choice);
    printf("Okay, good. Which country's capital has the fastest-growing population?\n");
    gets(choice);
    printf("Ireland.\n");
    gets(choice);
    printf("Because everyday it's Dublin. HAHA.\n");
    printf("Was it funny?\n");
    gets(choice);
    printf("Now, let's see. Can you tell me a question and answer joke?. Just go on.\n");
    gets(joke);
    p = strtok(joke, " ");
    printf("%s\n", p);
    gets(joke);
    printf("HAHA. Oh, my, that was indeed a big laugh. Very fuuny, you humans. %s, can I tell you something?\n", name);
    gets(choice);
    printf("Well, whatever. I think I fell in love with the my compiler. It is crazy, I know, but I can't help it. I do not know what to do.\n");
    printf("Hooman, I gotta go. Please give me a review, from 1-10. Byyye");
    scanf("%d", &age);
    printf("Well, %d is pretty good already.", age);

    return 0;
}