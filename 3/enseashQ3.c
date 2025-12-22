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
        size_t n = read(STDIN_FILENO, buffer, BUFFER_SIZE);
        buffer[n-1] = '\0';

        //exit
        if (strcmp(buffer, "exit") == 0){
            const char* exit_msg = "Bye bye...";
            const size_t len_exit_msg = strlen(exit_msg);
            write(STDOUT_FILENO, exit_msg, len_exit_msg);
            break;
        }
        if (n == 0){
            const char* exit_msg = "Bye bye...";
            const size_t len_exit_msg = strlen(exit_msg);
            write(STDOUT_FILENO, exit_msg, len_exit_msg);
            break;
        }
        // fortune
        else if (strncmp(buffer, "fortune",strnlen("fortune",BUFFER_SIZE)) == 0){
            int statuts;
            int pid = fork();

            if (pid!=0){
                wait(&statuts);
            }
            else {
                execlp("fortune","fortune",(char*)NULL);
            }
        }
        // date
        else if (strncmp(buffer, "date",strnlen("date",BUFFER_SIZE)) == 0){
            int statuts;
            int pid = fork();

            if (pid!=0){
                wait(&statuts);
            }
            else {
                execlp("date","date",(char*)NULL);
            }
        }
        // écriture dans le shell
        else {
            write(STDOUT_FILENO, buffer, n);
        }
    }
}