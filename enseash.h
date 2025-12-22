#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>

#define BUFFER_SIZE 128 // On fixe une variable définissant la taille du buffer à 128 caractères

void print(const char *str);