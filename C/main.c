#include <stdio.h>

void print_name(char *name) {
    for (int j = 0; name[j] != '\0'; j++){
        putchar(name[j]);
    }
}

int main(int argc, char *argv[]) {    
    if (argc < 2) {
        printf("Pas de nom renseigné\n");
        return 1;
    }
    int i = 1;
    while (i < argc) {
        char *hi = "Bonjour ";
        char *name = argv[i];
        print_name(hi);
        print_name(name);
        putchar('\n');
        i++;
    }
    return 0;
}
