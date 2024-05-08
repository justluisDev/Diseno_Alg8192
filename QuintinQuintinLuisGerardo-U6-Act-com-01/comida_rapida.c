#include <stdio.h>
#include <conio.h>

int main() {
    int opcion;
    
    printf("Menu de Comida Rapida:\n");
    printf("1. Hamburguesa\n");
    printf("2. Hot dog\n");
    printf("3. Papas fritas\n");
    printf("4. Nuggets de pollo\n");
    
    printf("\nSeleccione 4 opciones de comida rapida:\n");
    for (int i = 1; i <= 4; i++) {
        printf("Opcion %d: ", i);
        scanf("%d", &opcion);
        
        switch (opcion) {
            case 1:
                printf("Ha seleccionado una Hamburguesa\n");
                break;
            case 2:
                printf("Ha seleccionado un Hot dog\n");
                break;
            case 3:
                printf("Ha seleccionado Papas fritas\n");
                break;
            case 4:
                printf("Ha seleccionado Nuggets de pollo\n");
                break;
            default:
                printf("Opcion no valida. Por favor seleccione una opcion valida.\n");
                i--;
                break;
        }
    }
    
    printf("Presione cualquier tecla para salir...\n");
    getch();

    return 0;
}
