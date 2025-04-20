#include <stdio.h>
#include "complexo.h"

// Atribui valores para os campos de um número complexo
void atribui(Complexo *c, float real, float imaginario) {
    c->real = real;
    c->imaginario = imaginario;
}

// Imprime o número no formato "R + Ci"
void imprime(Complexo c) {
    printf("%.2f + %.2fi\n", c.real, c.imaginario);
}

// Copia o valor de um número complexo para outro
void copia(Complexo *destino, Complexo origem) {
    destino->real = origem.real;
    destino->imaginario = origem.imaginario;
}

// Soma dois números complexos
Complexo soma(Complexo c1, Complexo c2) {
    Complexo resultado;
    resultado.real = c1.real + c2.real;
    resultado.imaginario = c1.imaginario + c2.imaginario;
    return resultado;
}

// Testa se um número é real (parte imaginária igual a zero)
int ehReal(Complexo c) {
    return c.imaginario == 0;
}
