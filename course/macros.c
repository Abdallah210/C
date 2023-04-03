#include <stdio.h>
#include <stdlib.h>

// Preprocessor :
#define MEMBER_OF_FAMILY 5
#define AGE 23
#define FUNCTION() printf("Helloooooo !\n");
#define FUNCTION_WITH_PARAMETER(age) if (age >= 18) \
                        { printf("You are major !\n");} \
                        else {printf("You are not major !\n");}
#define FUNCTION_WITH_2_PARAMETERS(x, y) printf("%d + %d = %d",x, y, (x+y));

#define XXX


int main(int argc, char const *argv[])
{
    int family = MEMBER_OF_FAMILY;
    printf("%d\n", MEMBER_OF_FAMILY);

    FUNCTION()

    FUNCTION_WITH_PARAMETER(AGE)
    FUNCTION_WITH_2_PARAMETERS(23, 55)


    #if AGE>=18

    printf("\nCondition 1 !!");

    #elif AGE<18

    printf("\nCondition 2 !!");

    #endif

    #ifdef XXX

    printf("\nXXX is defined ");

    #endif



    return 0;
}



