
#include <stdio.h>

int main(){

    // máximo denominador N,
    // numeradores e denominadores,
    // contador i = 0,
    // size (tamanho) inicial dos arrays
    int N, n1 = 0, n2 = 1, d1 = 1, d2, i = 0, size = 2;

    // N máximo é 16; sequência tem até 2^N = 65536 elementos.
    int num[65536], den[65536];

    scanf("%d", &N);

    // alpha vai de 0 a 1
    d2 = N;
    num[0] = 0;
    num[1] = 1;
    den[0] = 1;
    den[1] = 1;


    // enquanto é possível criar frações:
    // (para quando não há mais uma fração
    // possível entre duas consecuivas)
    while (i < (size-1))
    {
        //verifica se a soma dos denominadores é maior que N 
        if ((den[i] + den[i+1]) <= N)
        {
            // para adicionar um item, movemos
            // todos os próximos para a direita
            // e colocamos no índice
            for (int j = size; j > i + 1; j--)
            {
                num[j] = num[j-1];
                den[j] = den[j-1];
            }

            // adiciona a nova fração:
            // numerador é o anterior mais o seguinte
            // denominador é o anterior mais o seguinte
            num[i+1] = num[i] + num[i+2];
            den[i+1] = den[i] + den[i+2];

            // mais uma fração
            size += 1;
            
        } else {
            // se passar de N, tentamos a próxima opção (i+1)
            i += 1;
        }
        
    }
    
    // escrever as frações
    for (int i = 0; i < size; i++)
    {
        printf("%d/%d\n", num[i], den[i]);
    }
    
    return 0;

}