#include <unistd.h>

void printChar(char l)
{
    write(1, &l, 1);
}

void printAllLettersStartingFrom(char letter)
{
    if (letter > 'z')
        return;

    printChar(letter);
    printAllLettersStartingFrom(letter + 1);
}

void printAlphabet(void)
{
    printAllLettersStartingFrom('a');
}

int main(void)
{
    printAlphabet();
    printChar('\n');

    return (0);
}