#include <stdio.h>

/*
    Pointeur : variable contenant l'adresse d une autre variable 
    %d    ->   affiche une adresse de variable ou de pointeur

    [VARIABLES]
        maVariable   : adresse de la variable 
        &maVariable  : adresse de la variable

       
    {POINTEURS}
        " *monPointeur = NULL " ou  " *monPointeur = &maVariable "
        (déclaration et initialisation d'un pointeur)

        monPointeur  : adresse de la variable pointée
        *monpointeur : valeur de la variable pointée
        &monPointeur : adresse du pointeur
*/

/*
void inverser_nombres(int *a, int *b)
{

    int temporaire = 0;

    temporaire = *b;
    *b = *a;
    *a = temporaire;

}


int main()
{
   
int nombreA = 10;
int nombreB = 5;


printf("AVANT : A = %d et B = %d\n", nombreA, nombreB);
inverser_nombres(&nombreA, &nombreB);
printf("APRES : A = %d et B = %d\n", nombreA, nombreB);





    return 0 ;
}
*/


// ----------------------------------------------------------------------------------------

void inverser_nombres(int *a, int *b)
{

    int temporaire = 0;

    temporaire = *b;
    *b = *a;
    *a = temporaire;

}




int main()
{
   
int nombreA = 10;
int nombreB = 5;

int *pointeurSurNombreA = &nombreA;
int *pointeurSurNombreB = &nombreB;



printf("AVANT : A = %d et B = %d\n", nombreA, nombreB);
inverser_nombres(pointeurSurNombreA, pointeurSurNombreB);
printf("APRES : A = %d et B = %d\n", nombreA, nombreB);





    return 0 ;
}

