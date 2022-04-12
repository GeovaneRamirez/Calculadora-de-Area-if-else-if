#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{

    setlocale (LC_ALL, "Portuguese");
    system ("color 5f");


    char forma;
    float area;
    float lado_quadrado;
    float lado_a_retangulo;
    float lado_b_retangulo;
    float raio;

    printf ("Digite 'q' se for um gradrado, 'r' se for um ret�ngulo ou 'c' se for um c�rculo: \n");
    scanf ("%s", &forma);

    if (forma == 'q') {
        printf ("Informe o lado do quadrado: \n");
        scanf ("%f", &lado_quadrado);
        area = pow (lado_quadrado, 2);
        printf ("A �rea do objeto �: %.2f", area);

    }else if (forma == 'r') {
        printf ("Informe um dos lados do ret�ngulo: \n");
        scanf ("%f", &lado_a_retangulo);
        printf ("Informe o outro lado do ret�ngulo: \n");
        scanf ("%f", &lado_b_retangulo);
        area = (lado_a_retangulo * lado_b_retangulo);
        printf ("A �rea do objeto �: %.2f", area);

    }else if (forma == 'c') {
            printf ("Informe o raio do c�rculo: \n");
            scanf ("%f", &raio);
            area = 3,14 * pow(raio,2);
            printf ("A �rea do objeto �: %.2f", area);

    }else if (forma != 'q' && forma != 'r' && forma != 'c') {
                printf ("Op��o inv�lida!\n");
    }

    return 0;
}
