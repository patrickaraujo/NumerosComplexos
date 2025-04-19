#include <stdio.h>

//    Vídeo: https://www.youtube.com/watch?v=R0y1fapso3g

// Definição da estrutura do número complexo
typedef struct {
    float real;
    float imaginario;
} Complexo;

// Operações do TAD

// Atribui valores para os campos
void atribui(Complexo *c, float real, float imaginario) {
    c->real = real;
    c->imaginario = imaginario;
}

// Imprime o número no formato "R + Ci"
void imprime(Complexo c) {
    printf("%.2f + %.2fi\n", c.real, c.imaginario);
}

// Copia o valor de um número para outro
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
// Retorna 1 se for real, 0 caso contrário
int ehReal(Complexo c) {
    return c.imaginario == 0;
}

// Programa principal para testar o TAD
int main() {
    Complexo c1, c2, c3, c4;
    
    printf("Testando o TAD Numero Complexo\n\n");
    
    // Teste de atribuição e impressão
    printf("Atribuindo valores:\n");
    atribui(&c1, 3.5, 2.7);
    printf("c1 = ");
    imprime(c1);
    
    atribui(&c2, 1.2, -4.1);
    printf("c2 = ");
    imprime(c2);
    
    // Teste de cópia
    printf("\nCopiando c1 para c3:\n");
    copia(&c3, c1);
    printf("c3 = ");
    imprime(c3);
    
    // Teste de soma
    printf("\nSomando c1 e c2:\n");
    c4 = soma(c1, c2);
    printf("c1 + c2 = ");
    imprime(c4);
    
    // Teste de verificação se é real
    printf("\nVerificando se os numeros sao reais:\n");
    printf("c1 eh real? %s\n", ehReal(c1) ? "Sim" : "Nao");
    
    atribui(&c4, 5.0, 0.0);
    printf("c4 = ");
    imprime(c4);
    printf("c4 eh real? %s\n", ehReal(c4) ? "Sim" : "Nao");
    
    return 0;
}
