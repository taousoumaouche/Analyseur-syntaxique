#include "module1.h"

int read_option(int argc, char *argv[]){
    int opt, opt_index = 0;
    static struct option long_options[] = {
          {"help", no_argument, 0, 'h'},
          {"tree", no_argument, 0, 't'},
    
          {0, 0, 0, 0}
    };

    while ((opt = getopt_long(argc, argv, "ht", long_options, &opt_index)) != -1) {
        switch (opt) {
            case 't':
                tree_flag = 1;
                break;
            case 'h':
                help_flag = 1;
                break;
            default:
                fprintf(stderr, "Usage : %s [OPTIONS] [file.tpc]\n",
                argv[0]);
                fprintf(stderr, "use --help or -h pour avoir plus d'information  .\n");
                return 1;
        }
        if (help_flag){
            return 0;
        }
    }
    return 0;
}


void print_synopsis(){
    printf("tpcas est un analyseur syntaxique base sur le langage C.\n");
    printf("Il s’agit d’un sous-langage qui implemente les types primitifs int et char et struct du langage C.\n");
    printf("le file est emplacement de fichier  \n");
    printf("Au cas d'erreur syntaxique notre analyseur vous affichera la ligne et colonne de la premiere erreur.\n ");
    printf("Usage :./bin/tpcas [OPTIONS] < FILE\n");
    printf("       ./bin/tpcas [OPTIONS]  FILE\n\n");
    printf("    Options:\n");
    printf("  -t, --tree    Affiche l'arbre abstrait d'un langage reconue par notre analyseur syntaxique .  \n");
    printf("  -h, --help    Affiche cette aide \n\n");
    printf("auteur MOKHTARI rayane , OUMAOUCHE taous  \n");
    }

int last_is_option(int argc, char **argv){
    return argv[argc - 1][0] == '-';
}


