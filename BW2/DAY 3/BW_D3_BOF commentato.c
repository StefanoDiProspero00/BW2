// Importiamo la libreria
#include <stdio.h>

int main () {

  // Dichiariamo il vettore che contiene interi con 10 elementi
  int vector [10], i, j, k;
  int swap_var; // ci servirà per l'ordinamento

  // Facciamo inserire 10 interi dall'utente e li faremo memorizzare nel vettore
  printf ("Inserire 10 interi:\n");
  for ( i = 0 ; i < 10 ; i++) {  // Il ciclo permette di controllare che vengano inseriti un massimo di 10 numeri
    // Stampiamo il numero di posizione dell'elemento da inserire
    int c= i+1;
    printf("[%d]:", c);
    // Leggiamo il numero inserito dall'utente
    scanf ("%d", &vector[i]);
  }

  // Stampiamo il vettore inserito
  printf ("Il vettore inserito e':\n");
  for ( i = 0 ; i < 10 ; i++) {
    // Stampiamo il numero di posizione dell'elemento
    int t= i+1;
    printf("[%d]: %d", t, vector[i]);
    printf("\n");
  }

  // Con questo ciclo for ordiniamo il vettore
  for (j = 0 ; j < 10 - 1; j++) {
    for (k = 0 ; k < 10 - j - 1; k++) {
      // Se l'elemento in lettura e' maggiore di quello successivo li scambiamo
      if (vector[k] > vector[k+1]) {
        swap_var=vector[k];
        vector[k]=vector[k+1];
        vector[k+1]=swap_var;
      }
    }
  }

  // Stampiamo il vettore ordinato
  printf("Il vettore ordinato e':\n");
  for (j = 0; j < 10; j++) {
    // Stampiamo il numero di posizione dell'elemento
    int g = j+1;
    printf("[%d]:", g);
    printf("%d\n", vector[j]);
  }

  return 0;

}