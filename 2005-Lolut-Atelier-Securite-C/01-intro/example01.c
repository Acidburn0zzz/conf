/**
 * Atelier securit� Lolut
 * Session 01 - Langage C et retro-ing�nierie
 * 6 octobre 2005 par Victor Stinner
 * 
 * Exemple 1 : A�e a�e a�e!
 */

#include <stdio.h>

int main(void)
{
    char name[10];
    printf("Enter your name: ");
    gets(name);
    printf("Hello %s!\n", name);
    return 0;
}    
