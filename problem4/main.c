#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void ecrire(int nombreOriginal, int tableauSortie[], int tailleTableau); // Permet de transférer un nombre dans un tableau
void inverserTableau(int tableau[], int tailleTableau); // Comme le titre le dit, cette fonction inverse un tableau
void copie(int tableauOriginal[], int tableauCopie[], int tailleTableau); // Cette fonction fait la copie d'un tableau dans un autre
int comparerTableau(int tableauUn[], int tableauDeux[], int tailleTableau); /* Cette fonction compare deux tableaux. Si elles identiques ou si elles ne le sont pas.
Si elles sont identiques, la fonction renvoie 0 et si elles ne le sont pas, la fonction renvoie 1. */

int main(void)
{
    int nombre = 0, nombreUn, nombreDeux; // Stock les incrémentations et tous les nombres.
    int nombreMax = 9999; // Ce nombre est le plus haut nombre que nombreUn et nombreDeux peuvent atteindre avec l'incrémentation.
    int dernierNombre = 0, dernierNombreUn, dernierNombreDeux; //Garde les max en note pour les afficher ensuite à l'extérieur de la boucle afin de ne pas afficher une tonne de nombres.
    int palindrome[8]; // Tableau dans lequel on stock le nombre
    int nombreTest[8]; // Tableau avec lequel on inverse le nombre pour tester s'il est un palindrome
    int taillePalindrome = 8; // Le titre explique tout

    for(nombreUn = 1000; nombreUn <= nombreMax; nombreUn++)
    {
        for(nombreDeux = nombreUn; nombreDeux <= nombreMax; nombreDeux++)
        {
            nombre = nombreUn * nombreDeux;
            ecrire(nombre, palindrome, taillePalindrome);    // |     Ici, on teste si c'est un palindrome en écrivant le nombre dans deux tableaux
            copie(palindrome, nombreTest, taillePalindrome); // | --> et en inversant le nombre dans un des tableaux. Finalement, on utilise la fonction
            inverserTableau(nombreTest, taillePalindrome);   // |     comparerTableau pour tester si c'est bien deux tableaux identiques.
            if(comparerTableau(nombreTest, palindrome, taillePalindrome) == 0 && dernierNombre < nombre) // Si c'est un palindrome et si le palindrome est plus grand que le dernier enregistré ...
            {
                dernierNombre = nombre;          // |
                dernierNombreUn = nombreUn;      // | --> On garde les maximums en note.
                dernierNombreDeux = nombreDeux;  // |
            }
        }
    }

    printf("%d\n%d\n%d\n", dernierNombreUn, dernierNombreDeux, dernierNombre); // On affiche les résultats.

    return 0;
}

void ecrire(int nombreOriginal, int tableauSortie[], int tailleTableau)
{
    int i;
    for (i = 0; i < tailleTableau; i++)
    {
        tableauSortie[i] = nombreOriginal % 10;
        nombreOriginal = nombreOriginal / 10;
    }

}

void inverserTableau(int tableau[], int tailleTableau)
{
        int i = 0, temp = 0;

        for (i = 0 ; i < tailleTableau / 2 ; i++)
        {
                temp = tableau[i];
                tableau[i] = tableau[tailleTableau - i - 1];
                tableau[tailleTableau - i - 1] = temp;
        }
}

void copie(int tableauOriginal[], int tableauCopie[], int tailleTableau)
{
    int i;
    for (i = 0; i < tailleTableau; i++)
    {
        tableauCopie[i] = tableauOriginal[i];
    }

}

int comparerTableau(int tableauUn[], int tableauDeux[], int tailleTableau)
{
    int i = 0, j = 0;

    for (i = 0; i < tailleTableau; i++)
    {
        if(tableauUn[i] != tableauDeux[i])
        {
            j = 1;
        }
    }
    return j;
}
