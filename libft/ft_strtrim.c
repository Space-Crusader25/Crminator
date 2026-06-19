/* ft_strtrim.c
 *  Created on: 2026-06-19
 * une fonction qui supprime les caractères de début et de fin
 * d'une chaîne de caractères
 * cas d'erreur /0
 */
#include <stdio.h>
#include <stdlib.h>

void ft_putstr(char *name) {
    for (int j = 0; name[j] != '\0'; j++){
        putchar(name[j]);
    }
}

 char *ft_strtrim(char *unfixed, char to_remove) {
    int i = 0;
    int j = 0;
    int k = 0;
    char *fixed;

    while(unfixed[i] == to_remove)
    {
        i++;
    }    
    while(unfixed[i] != '\0')
    {
        fixed[j] = unfixed[i];
        if(unfixed[i] == to_remove)
        {
            k++;
        }
        else
        {
            k = 0;
        }
        i++;
        j++;
    }
    fixed[j - k] = '\0';
    
    return fixed;
 }

 int main(int argc, char *argv[])
 {
    char *word = argv[1];
    char letter = argv[2][0];
    printf("*%s*\n", word);
    char *answer = ft_strtrim(word, letter);
    printf ("*%s*\n", answer);

    return 0;
 }
