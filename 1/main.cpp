#include "main.h"


int stout = 1;


void my_printf(const char *str)
{
    int i = 0;
    while (str[i]){
        i++;
    }
    write(stout, str, i);
    write(stout, "\n", 1); //applique automatiquement un retour à la ligne
}


int main()
{
    my_printf("$ ./enseash");
    my_printf("Bienvenue dans le Shell ENSEA.");
    my_printf("Pour quitter, tapez 'exit'.");
    my_printf("enseash %");
    return 0;
}
