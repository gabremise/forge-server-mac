// By Gabriel Remise, @gabremise on github

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <libgen.h> 

int main(int argc, char *argv[]) {
    printf("Démarrage\n");

    char path[10000];
    strcpy(path, argv[0]);

    char *dir = dirname(path);

    char commande[10000];

    sprintf(commande, "cd %s ; java @user_jvm_args.txt @libraries/net/minecraftforge/forge/1.20.1-47.2.0/unix_args.txt \"$@\"", dir);

    system(commande);
    return 0;
}
