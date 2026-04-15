#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int dividendo, divisor, quociente, resto;

    printf("Digite o dividendo: ");
    if (scanf("%d", &dividendo) != 1) return 1;

    printf("Digite o divisor: ");
    if (scanf("%d", &divisor) != 1) return 1;

 
    if (divisor == 0) {
        printf("Não existe divisão por zero\n");
        return 0; 
    }

   
    quociente = dividendo / divisor;
    resto = dividendo % divisor;

 
    printf("Quociente: %d\n", quociente);
    printf("Resto: %d\n", resto);

    return 0;
     printf("criado por Miguel de Mello");
}
