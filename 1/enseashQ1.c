#include "enseash.h"

int main() {

    // Message d'entrée du shell
    const char* welcome_msg = "Bienvenue dans le Shell ENSEA.\nPour quitter, tapez 'exit'.";
    const size_t len_welcome_msg = strnlen(welcome_msg, BUFFER_SIZE);

    write(STDOUT_FILENO, welcome_msg, len_welcome_msg);

    const char* prefix = "\nenseash % ";
    const size_t len_prefix = strnlen(prefix, BUFFER_SIZE);

    char buffer[BUFFER_SIZE];

    while (1){
        //prefix
        write(STDOUT_FILENO, prefix, len_prefix);

        //read
        ssize_t n = read(STDIN_FILENO, buffer, BUFFER_SIZE);
        buffer[n-1] = '\0';

        // écriture dans le shell
        write(STDOUT_FILENO, buffer, n);
    }
}