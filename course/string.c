#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int myStrlen(const char *string);

int main(int argc, char const *argv[])
{
    // character :
    char letter = 'A';

    printf("Letter A : %d - %c", letter, letter);   

    // string :
    char string[] = "Abdallah";


    // strlen :
    int lenght = strlen(string);

    printf("\n\nthe lenght of '%s' is %d", string, lenght);
    printf("\nthe lenght of '%s' is %d", string, myStrlen(string));

    // strcpy : prototype -> char* strcpy(char *copiedString, const char *stringToCopy)
    char myString[] = "this is my string !";
    char copy[100] = {0}; 

    strcpy(copy, myString);

    printf("\n\nstring 1 : %s\nstring 2 :%s", myString, copy);


    // strcat : prototype -> char* strcat(const char *s1, const char *s2)
    char s1[] = "Abda", s2[] = "llah", s3[100] = {0};
    strcpy(s3, s1);
    strcat(s3, s2);

    printf("\n\n%s + %s = %s", s1, s2, s3);


    //strcmp : prototype -> int strcmp(const char *s1, const char *s2)

    char s4[]= "ooo", s5[] = "ooo";

    if (strcmp(s4,s5)==0)
    {
        printf("\n\ns4 and s5 are same ");
    }
    else
    {
        printf("\n\ns4 and s5 are NOT same ");
    }


    // strchr : prototype -> char* strchr(const char* string, int characterToFind)
    
    char s6[] = "C is beautiful !", *rest = NULL;

    rest = strchr(s6, 'b');  // "beautiful !"

    printf("\n\n%s", s6);
    printf("\n%s", rest);

    // 






    return 0;
}


int myStrlen(const char *string){

    int cmp = 0, currentChar = 0;    

    do
    {
        currentChar = string[cmp];
        cmp++;
    } while (currentChar != '\0');

    cmp--;

    return cmp;
    
}
