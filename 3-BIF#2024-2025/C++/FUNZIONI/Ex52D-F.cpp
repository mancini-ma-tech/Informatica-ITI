// Ex52-F	Somma di 2 vettori
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <iomanip>

using namespace std;
// prototipi
void caricaVet(int[], int);
void stampaVet(int[], int);
int *sommaVet(int[], int[], int);
int main()
{
	const int N = 6;
	int v1[N] = {100, 101, 102, 103, 104, 105};
	int v2[N], k;
	int *v3;
	srand(time(NULL));
	// carico
	caricaVet(v1, N);
	caricaVet(v2, N);
	// stampa i vettori
	stampaVet(v1, N);
	stampaVet(v2, N);

	// sommo i due vettori
	sommaVet(v1, v2, N);
	cout << endl;
	stampaVet(v3, N);

	cout << endl;
	stampaVet(v3, N);
	return 0;
}

// funzione  carica vettore
void caricaVet(int vet[], int L)
{
	for (int k = 0; k < L; k++)
		vet[k] = rand() % 10 + 1;
}
// funzione stampa vettore
void stampaVet(int vet[], int L)
{
	for (int k = 0; k < L; k++)
		cout << vet[k] << "\t";
	cout << endl;
}
// funzione somma vettori
int *sommaVet(int a[], int b[], int L)
{
	int *c = new int[L];
	for (int k = 0; k < L; k++)
	{
		c[k] = a[k] + b[k];
	}

	return c;
}