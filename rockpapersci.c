#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int game(char you, char computer) {
  if (you == computer) 
        return -1;
    if (you == 's' && computer == 'p')
        return 0;
    else if (you == 'p' && computer == 's')
        return 1;
    if (you == 's' && computer == 'z')
        return 1;
    else if (you == 'z' && computer == 's')
        return 0;
    if (you == 'p' && computer == 'z')
        return 0;
    else if (you == 'z' && computer == 'p')
        return 1;
    return -1; // Default return if no condition matches
}

int main() {
    int n;
    char you, computer, result, continueprogram = 'y';

    while (continueprogram == 'y' || continueprogram == 'Y') {
   
    srand(time(NULL));
    n = rand() % 100;

    if (n < 33) {
        computer = 's';
    } else if (n > 33 && n < 66) {
        computer = 'p';
    } else {
        computer = 'z';
    }

    printf("Enter s for stone, p for paper or z for scissors\n");
    scanf("%c", &you);

    result = game(you, computer);
    if (result == -1) {
        printf("Game draw!\n");
    } else if (result == 1) {
        printf("Game won!\n");
    } else {
        printf("Game lost!\n");
    }
    printf("You chose: %c and the computer chose: %c\n", you, computer);
    printf("Do you want to perform another operation? (y/n): ");
        scanf(" %c", &continueprogram);
        while (getchar() != '\n'); // Clear input buffer
}
}