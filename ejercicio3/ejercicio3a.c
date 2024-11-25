#include <stdio.h>

void ejercicio3a() {
    FILE *file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("El archivo no se pudo abrir.\n");
        return;
    }

    printf("El archivo se abrió correctamente.\n");
    fclose(file);
}
