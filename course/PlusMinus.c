#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    
    const MAX = 100, MIN = 0;
    int alea, choix;

    srand(time(NULL));
    alea = (rand() % (MAX - MIN + 1)) + MIN;

    
    do {

        printf("Quel est le nombre ?\n");
        scanf("%d", &choix);
        
        if (choix>alea)
        {
            printf("C'est moins !\n");
        }
        else if (choix<alea)
        {
            printf("C'est plus !\n");
        } else
        {
            printf("Bravo ! vous avez trouve le nombre mystere !");
        }
        
   
    } while (choix!=alea);
    

    return 0;
}
