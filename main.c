#include <stdio.h>
#include <stdlib.h>

/* 

void triplePointeur(int *pointeurSurNombre);

int main()
{
    int nombre = 5;

    triplePointeur(&nombre); //on envoi l'adresse du nombre a la fonction

    printf("%d/n", nombre); //on affiche la variable nombre.la fonction a directement modifié la valeur de la variable car elle connaissait son adresse


    
    return 0;
} 
void triplePointeur(int *pointeurSurNombre)
{
    *pointeurSurNombre *= 3;  //on multiplie par 3 la valeur de nombre
}

*/


//--------------------------------------------------------------------------------------------------------------------------

void triplePointeur(int *pointeurSurNombre);

int main()
{
    int nombre = 5;
    int *pointeur =&nombre; //pointeur prend l'adresse de nombre

    triplePointeur(pointeur); // on envoi pointeur(l'adresse de nombre) à la fonction

    printf("%d\n", *pointeur); //on affiche la valeur de nombre avec *pointeur

    return 0;
}
void triplePointeur(int *pointeurSurNombre)
{
    *pointeurSurNombre *= 3; // on multiplie par 3 la valeur de nombre
}