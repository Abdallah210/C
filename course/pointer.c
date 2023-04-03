
#include <stdio.h>
#include <stdlib.h>

void decoupeMinutes(int *heures, int *minutes);

int main(int argc, char const *argv[])
{

    int age = 10, age1 = 20, age2 = 40;

    int *pointerAge = NULL, *pointerAge1 = NULL, *pointerAge2 = NULL;

    pointerAge = &age;
    pointerAge1 = &age1;
    pointerAge2 = &age2;

    // 3 ways to control adress and value of the variables with pointers :
    /*
    printf("\nvariable 1 :\n");
    printf("l'adresse de %d est : %p\n", age , pointerAge);
    printf("l'adresse de %d est : %p\n", age , &age);
    printf("l'adresse de %d est : %p\n", *pointerAge , &age);
    printf("l'adresse de %d est : %p\n", *pointerAge , pointerAge);

    printf("\nvariable 2 :\n");
    printf("l'adresse de %d est : %p\n", age1 , pointerAge1);
    printf("l'adresse de %d est : %p\n", age1 , &age1);
    printf("l'adresse de %d est : %p\n", *pointerAge1 , &age1);
    printf("l'adresse de %d est : %p\n", *pointerAge1 , pointerAge1);
   
    printf("\nvariable 3 :\n");
    printf("l'adresse de %d est : %p\n", age2 , pointerAge2);
    printf("l'adresse de %d est : %p\n", age2 , &age2);
    printf("l'adresse de %d est : %p\n", *pointerAge2 , &age2);
    printf("l'adresse de %d est : %p\n", *pointerAge2 , pointerAge2);
    */

    int heures = 0, minutes = 90;

    decoupeMinutes(&heures, &minutes);

    printf("%d heures et %d minutes.", heures, minutes);

    return 0;
}

void decoupeMinutes(int *heures, int *minutes){
    
    *heures = *minutes/60;
    *minutes = *minutes%60;
}
