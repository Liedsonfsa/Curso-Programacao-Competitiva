#include <stdio.h>

int main() {

    int numero;

    scanf("%d", &numero);

    int centena = numero / 100;

    int resto;

    resto = numero % 100;

    int dezena;

    dezena = resto / 10;

    int unidade;

    unidade = resto % 10;

    int novo_numero;

    novo_numero = unidade * 100 + dezena * 10 + centena;

    printf("%d\n", novo_numero);

    // https://www.pythonprogressivo.net/2018/10/Exercicio-Sequencias-Listas-Tuplas-Dicionarios.html


    return 0;
}