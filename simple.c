#include <stdio.h>
#include <unistd.h>



int main (void) {
    printf("Mario!\n");

    char input[3299];

    printf("Please input something and prese [ENTER]\n\n> ");
    scanf("%s", input);
    printf("Hi, you typed: %s\n\n", input);

    printf("Reading from the keyboard (ctrl+d to stop)...\n");

    char ch;
    while (read(STDIN_FILENO, &ch, 1) > 0) {
        printf("%c", ch);
    }

    printf("\nOK BYE!\n");

    return 0;
}
