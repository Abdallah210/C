#include <stdio.h>
#include <stdlib.h>

int sommeTableau(int tableau[]);
int cherche(int tableau[], int taille, int valeur);
int supprime_doublon(int source[], int taille, int dest[]);

int main(int argc, char const *argv[])
{
    int tableau[4] = {1, 2, 3, 4};
    int tableau2[4] = {0};
    
    supprime_doublon(tableau, 4, tableau2);
    
    int c;
    for (c = 0; c < 4; c++)
    {
        printf("resultat : %d", tableau2[c]);
    }
    
        //printf("resultat : %d", cherche(tableau, 4, 45));



    return 0;
}

int sommeTableau(int tableau[]){

    int i, res, lenArray;

    lenArray = sizeof tableau / sizeof(tableau[0]);
    for (i = 0; i < lenArray ; i++)
    {
        res += tableau[i];
    }
    return res;
    
}



int cherche(int tableau[], int taille, int valeur){

    int i, trouvee = 0;

    for (i = 0; i < taille; i++)
    {
        if (tableau[i]==valeur)
        {
            trouvee = 1;
        }
    }
    
    return trouvee;
    
}

int supprime_doublon(int source[], int taille, int dest[]){

    int i=0, j=0;

    for (i = 0; i < taille; i++)
    {
            if (cherche(dest,taille, source[i]))
            {
                dest[j] = source[i];
                j++;
            }
        }  

    return dest;
}

