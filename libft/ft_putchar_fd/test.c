#include <stdio.h>      // pour putchar, fopen, fprintf, perror
#include <stdlib.h>     // pour EXIT_FAILURE, EXIT_SUCCESS

// Écrire une chaîne de caractères sur stdout avec putchar
static void putstr(const char *s)
{
    while (*s != '\0')
        putchar(*s++);
}

// Écrire un entier positif en base 10 sur stdout
static void putnbr(int n)
{
    if (n < 0)
    {
        putchar('-');
        n = -n;
    }
    if (n >= 10)
        putnbr(n / 10);
    putchar((char)('0' + (n % 10)));
}

/**
 * Programme : Écrire des commandes en console et dans un fichier
 *
 * Utilisation : ./test commande1 commande2 commande3 ...
 * Exemple : ./test "echo Hello" "ls -l" "pwd"
 */
int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        putstr("Usage: ");
        putstr(argv[0]);
        putstr(" commande1 commande2 ...\n");
        putstr("Exemple: ");
        putstr(argv[0]);
        putstr(" \"echo Hello\" \"ls -l\"\n");
        return (EXIT_FAILURE);
    }

    FILE *fichier = fopen("commandes.txt", "w");
    if (fichier == NULL)
    {
        perror("Erreur : impossible d'ouvrir commandes.txt");
        return (EXIT_FAILURE);
    }

    for (int i = 1; i < argc; i++)
    {
        putstr("Ajout : ");
        putstr(argv[i]);
        putchar('\n');
        fprintf(fichier, "%s\n", argv[i]);
    }

    putchar('\n');
    putstr("✓ ");
    putnbr(argc - 1);
    putstr(" commande(s) écrite(s) dans commandes.txt\n");

    fclose(fichier);
    return (EXIT_SUCCESS);
}
