#include <stdio.h>
#include "Complexo.h"

//    Vídeo: https://www.youtube.com/watch?v=R0y1fapso3g

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
