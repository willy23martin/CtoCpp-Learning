/*
Santiago de Cali, 7 Gennaio, 2021
Lezione di C - C/C++ Curso de programación di Francisco Javier Ceballos
- Capitolo 1:
  * Esercizi proposti: aritmetica.c
*/

#include <stdio.h>
#include <locale.h>

int main(void){

    setlocale(0, "");

    double ottenere_numero();

    printf("Specifici il numero uno per favore: \n");
    double numero_uno = ottenere_numero();
    printf("Specifici il numero due per favore: \n");
    double numero_due = ottenere_numero();
    printf("Specifici il numero tre per favore: \n");
    double numero_tre = ottenere_numero();

    printf("Grazie. Faremo calcoli ... \n");

    double somma = numero_uno + numero_due + numero_tre;
    printf("%lf + %lf + %lf = %lf \n", numero_uno, numero_due, numero_tre, somma);

    double sottrazione = numero_uno - numero_due - numero_tre;
    printf("%lf - %lf - %lf = %lf \n", numero_uno, numero_due, numero_tre, sottrazione);

    double moltiplicazione = numero_uno * numero_due * numero_tre;
    printf("%lf * %lf * %lf = %lf \n", numero_uno, numero_due, numero_tre, moltiplicazione);

    double divisione = numero_uno / numero_due / numero_tre;
    printf("%lf / %lf / %lf = %lf \n", numero_uno, numero_due, numero_tre, divisione);

}

double ottenere_numero(){
    double risultato_numero = 0;
    double numero;
    while(risultato_numero == 0){
        risultato_numero = scanf("%lf", &numero);
        if(risultato_numero == 0) {
            printf("Il numero deve essere corretto. \n");
        }
    }
    return numero;
}
