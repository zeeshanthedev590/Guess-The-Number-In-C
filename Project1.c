#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{

    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    printf("%d", number);
    // Loop Here

    do
    {
        printf("Guess The Number between 1 and 100 : ");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Enter A Lower Number Please !\n");
        }
        if (guess < number)
        {
            printf("Enter A Greater Number Please !\n");
        }
        if (guess == number)
        {
            printf("You Won !!!\n");
            printf("You Used %d Attenpts To Win!\n ", nguesses);
            break;
        }

        else
        {
            printf("You Have Used %d Attenpts\n", nguesses);
        }

        nguesses = nguesses + 1;
    } while (guess != number);
    return 0;
}
