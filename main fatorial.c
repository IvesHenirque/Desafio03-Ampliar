//Feito com ajuda de muita pesquisa. 
//Mas entendi todos os aspectos do algoritmo, e entendi o motivo do uso de cada linha.
//Comentários exemplificando o que foi entendido.

#include <stdio.h>
//inicia criando a função do fatorial.
int calcularFatorial(int numero){
    int fatorial = 1;//inicia a contagem em 1, não em 0.

    printf("Calculando %d! = ", numero);//exibe o calculo.
// i começa em 1 e a cada laço incrementa +1
    for(int i = 1; i <= numero; ++i){ //enquando i for menor que o numero informado
        fatorial *= i;               //ele vai acrescentar mais um e multiplicar
        printf("%d", i);            // pelo próximo numero armazenado em i.

        if (i < numero){ //Esse comando tem a intenção de mostrar durante a execução como o fatorial do numero é feito.
            printf(" x "); //Imprime um X a cada fim de laço, na condição de i ser menor que o numero informado.
        }                 // por isso na impressão fica 1 x 2 x 3 e etc.
    }                   
    return fatorial; // Retorna o valor do Fatorial
}

int main() {

    int numero;

    printf("Insira o numero desejado: ");// usuario insere numero usado no laço de fatorial
    scanf("%d", &numero);

    if (numero < 0){ //condição pro numero não ser negativo
        printf("Numero Negativo nao e permitido.");
    }
    else {
        printf("\nO resultado do fatorial do numero inserido é: %d", calcularFatorial(numero));
    } //imprime resultado do fatorial do numero
     //puxa a função CalcularFatorial e puxa o resultado de Numero.  
     
    return 0;
}