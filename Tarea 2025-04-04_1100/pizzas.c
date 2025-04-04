#include <stdio.h>

int main() {
    char tipo, ingrediente;

    printf("Seleccione el tipo de pizza que quiere:\n");
    printf("v - Vegetariana\n");
    printf("n - No vegetariana\n");
    printf("Opcion: ");
    scanf(" %c", &tipo);

    switch(tipo) {
        case 'v':
            printf("\nIngredientes vegetarianos disponibles:\n");
            printf("1 - Pimiento\n");
            printf("2 - Tofu\n");
            printf("Seleccione un ingrediente (1-2): ");
            scanf(" %c", &ingrediente);

            printf("\nSu pizza es vegetariana y contiene:\n");
            printf("- Mozzarella\n- Tomate\n");

            switch(ingrediente) {
                case '1':
                    printf("- Pimiento\n");
                    break;
                case '2':
                    printf("- Tofu\n");
                    break;
                default:
                    printf("- Usted no eligio ningun ingrediente mencionado (se servira solo mozzarella y tomate)\n");
            }
            break;

        case 'n':
            printf("\nIngredientes no vegetarianos disponibles:\n");
            printf("1 - Peperoni\n");
            printf("2 - Jamon\n");
            printf("3 - Salmon\n");
            printf("Seleccione un ingrediente (1-3): ");
            scanf(" %c", &ingrediente);

            printf("\nSu pizza no es vegetariana y contiene:\n");
            printf("- Mozzarella\n- Tomate\n");

            switch(ingrediente) {
                case '1':
                    printf("- Peperoni\n");
                    break;
                case '2':
                    printf("- Jamon\n");
                    break;
                case '3':
                    printf("- Salmon\n");
                    break;
                default:
                    printf("- Usted no eligio ningun ingrediente mencionado (se servira solo mozzarella y tomate)\n");
            }
            break;

        default:
            printf("\nOpcion no existe. Por favor seleccione v o n.\n");
    }

    return 0;
}


