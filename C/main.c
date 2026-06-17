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
    for (int i = 1; i < argc; i++){
        char *hi = "Bonjour ";
        char *name = argv[i];
        print_name(hi);
        print_name(name);
        putchar('\n');
    }
    return 0;
}
