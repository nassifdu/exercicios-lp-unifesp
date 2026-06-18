
// atletas

#include <stdio.h>
#include <string.h>

#define MAX 8

typedef struct {
	char nome[50];
	int idade;
	float altura;
	float peso;
	int gols;
} Atleta;

float IMC(Atleta a) {
	if (a.altura <= 0) {
        return 0.0; // evita div por zero
    }
    return a.peso / (a.altura * a.altura);
}

Atleta artilheiro(int n, Atleta lista[n]) {
	int m = 0;
	for (int i = 1; i < n; i++) {
		if (lista[i].gols > lista[m].gols)
			m = i;
	}
	return lista[m];
}

void ordenar(int n, Atleta l[n]) {
	// bubble sort: intuitivo, simples
	// trocamos l[i] por l[i+1] se l[i+1] > l[i]
	// temos que passar n vezes para conferir tudo
	for (int i = 0; i < n; i++) {
		int swap = 0;

		// comparar cada l[j] com l[j+1]
		// últimos i itens já em ordem; vemos até n-i-1
		// (-1 para que o item j+1 não "transborde")
		for (int j = 0; j < n-i-1; j++) {
			if (l[j].gols > l[j + 1].gols) {
				Atleta temp = l[j];
				l[j] = l[j + 1];
				l[j + 1] = temp;

				swap = 1;
			}
		}

		// nenhum swap -> fim
		if (swap == 0) {
			break;
		}
	}
}

void alterar(Atleta *a, char nome_[], int idade_, float altura_, float peso_, int gols_) {
	// alterar os atributos
	// "a -> x" é igual "(*a).x", ou seja, pega o atributo pelo ponteiro
	// para o nome (string), devemos usar strcpy (do string.h)
	strcpy(a -> nome, nome_);
	a -> idade = idade_;
	a -> altura = altura_;
	a -> peso = peso_;
	a -> gols = gols_;
}

int main() {
	Atleta lista[MAX];

	for (int i = 0; i < MAX; i++) {
		// nome sem &, pois é string
		scanf("%s", lista[i].nome);
		// idade, altura, peso, gols
		scanf("%d %f %f %d", &lista[i].idade, &lista[i].altura, &lista[i].peso, &lista[i].gols);
	}

	return 0;
}