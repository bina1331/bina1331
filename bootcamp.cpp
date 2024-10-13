#include <stdio.h>
#include <math.h>

void menu() {
    printf("Escolha a operação:\n");
    printf("1. Soma\n");
    printf("2. Subtração\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");
    printf("5. Seno\n");
    printf("6. Cosseno\n");
    printf("7. Tangente\n");
    printf("8. Logaritmo\n");
    printf("9. Exponencial\n");
}

int main() {
    int escolha;
    double num1, num2;

    menu();
    scanf("%d", &escolha);

    if (escolha >= 1 && escolha <= 4) {
        printf("Digite dois números: ");
        scanf("%lf %lf", &num1, &num2);
    } else {
        printf("Digite um número: ");
        scanf("%lf", &num1);
    }

    switch (escolha) {
        case 1:
            printf("Resultado: %.2lf\n", num1 + num2);
            break;
        case 2:
            printf("Resultado: %.2lf\n", num1 - num2);
            break;
        case 3:
            printf("Resultado: %.2lf\n", num1 * num2);
            break;
        case 4:
            if (num2 != 0)
                printf("Resultado: %.2lf\n", num1 / num2);
            else
                printf("Erro: Divisão por zero!\n");
            break;
        case 5:
            printf("Resultado: %.2lf\n", sin(num1));
            break;
        case 6:
            printf("Resultado: %.2lf\n", cos(num1));
            break;
        case 7:
            printf("Resultado: %.2lf\n", tan(num1));
            break;
        case 8:
            if (num1 > 0)
                printf("Resultado: %.2lf\n", log(num1));
            else
                printf("Erro: Logaritmo de número não positivo!\n");
            break;
        case 9:
            printf("Resultado: %.2lf\n", exp(num1));
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}

