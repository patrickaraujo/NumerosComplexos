#ifndef COMPLEXO_H_INCLUDED
#define COMPLEXO_H_INCLUDED

// Definição da estrutura do número complexo
typedef struct {
    float real;
    float imaginario;
} Complexo;

// Atribui valores para os campos de um número complexo
void atribui(Complexo *c, float real, float imaginario);

// Imprime o número no formato "R + Ci"
void imprime(Complexo c);

// Copia o valor de um número complexo para outro
void copia(Complexo *destino, Complexo origem);

// Soma dois números complexos
Complexo soma(Complexo c1, Complexo c2);

// Testa se um número é real (parte imaginária igual a zero)
// Retorna 1 se for real, 0 caso contrário
int ehReal(Complexo c);

#endif // COMPLEXO_H_INCLUDED
