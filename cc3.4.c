#include <stdio.h>

int main () {
    float nota_1, nota_2, nota_3, nota_4, media;

    printf("Digite a primeira nota: \n", nota_1);
    scanf("%f", &nota_1);
    printf("Digite a segunda nota: \n", nota_2);
    scanf("%f", &nota_2);
    printf("Digite a terceira nota: \n", nota_3);
    scanf("%f", &nota_3);
    printf("Digite a quarta nota: \n", nota_4);
    scanf("%f", &nota_4);

    media = (nota_1 + nota_2 + nota_3 + nota_4) / 4.0;
    printf("Media = %f\n", media);
    return 0;
}