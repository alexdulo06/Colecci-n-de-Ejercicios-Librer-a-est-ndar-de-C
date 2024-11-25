#include <stdio.h>

// Declarar las funciones para cada ejercicio
void ejercicio1a();
void ejercicio1b();
void ejercicio2a();
void ejercicio2b();
void ejercicio3a();
void ejercicio3b();

int main() {
    int opcion;

    printf("Selecciona un ejercicio para ejecutar:\n");
    printf("1. Ejercicio 1a (abs)\n");
    printf("2. Ejercicio 1b (rand)\n");
    printf("3. Ejercicio 2a (strcmp)\n");
    printf("4. Ejercicio 2b (strlen)\n");
    printf("5. Ejercicio 3a (fopen)\n");
    printf("6. Ejercicio 3b (fprintf y fscanf)\n");
    printf("Opción: ");
    scanf("%d", &opcion);

    switch (opcion) {
    case 1:
        ejercicio1a();
        break;
    case 2:
        ejercicio1b();
        break;
    case 3:
        ejercicio2a();
        break;
    case 4:
        ejercicio2b();
        break;
    case 5:
        ejercicio3a();
        break;
    case 6:
        ejercicio3b();
        break;
    default:
        printf("Opción inválida.\n");
    }

    return 0;
}
