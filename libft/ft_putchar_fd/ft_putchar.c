#include <stdio.h>      // pour fopen, fgets, perror
#include <stdlib.h>     // pour malloc, system

int main(int argc, char *argv[]) {

    }
    
    FILE *f = fopen("commandes.txt", "r");

    if (f == NULL) {
        perror("Erreur");
        return 1;
    }

    // ⚠️ PROBLÈME : malloc crée de l'espace mémoire, puis on l'écrase avec argv[1]
    char commande[256];// On perd le pointeur malloc ! Fuite mémoire.

    // Boucle : lire chaque ligne du fichier
    // fgets lit une ligne (maximum 256 caractères) et la stocke dans commande
    while (fgets(commande, sizeof(commande), f)) {
        // ⚠️ PROBLÈME : fgets() laisse le '\n' à la fin de la chaîne
        // Donc commande contient : "ma_commande\n"
        
        int i = 0;
        // Afficher la commande caractère par caractère
        while (commande[i] != '\0') {
            putchar(commande[i]);  // afficher 1 char
            i++;
        }
        
        // Exécuter la commande shell
        // ⚠️ PROBLÈME : system("ma_commande\n") échoue souvent
        // car le '\n' n'est pas valide en ligne de commande shell
        system(commande);
    }

    // Fermer le fichier
    fclose(f);
    return 0;  // quitter avec code de succès
}
