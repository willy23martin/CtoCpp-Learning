/*
Santiago de Cali, 9, Gennaio, 2021.

Apprendimento da C a C++

- Tipi di dati: unsigned, signed, short, long,
                const, volatile.
*/

#include <stdio.h>
#include <iostream>
#include <locale>

using namespace std;

int main()
{

    setlocale(LC_ALL, "italian");

    /*
    unsigned: non valori negativi.
    */
    unsigned int eta = -28U; //U= Unsigned
    std::cout << "Età: " <<  eta << std::endl; // 4294967268

    /*
    signed: per variabili di tipo char.
    */
    signed int debito = -8900;
    std::cout << "Debito: " << debito << std::endl;

    /*
    short: per variabili interi piu lunghi di char ma meno lungo di int.
    */
    short int codice_smistamento = 4;
    std::cout << "Codice smistamento: " << codice_smistamento << " con lunghezza: " << sizeof(codice_smistamento) << " bytes." << std::endl;

    /*
    long: per varibili interi più lungo ai interi.
    */
    long int codice_lungo = 9099;
    std::cout << "Codice lungo: " << codice_lungo << " con lunghezza: " << sizeof(codice_lungo) << " bytes." << std::endl;

    /*
    const: variabili che non si possono modificare (Compilation error) nel loro valori.
    */
    const int LETTERE = 21;
// LETTERE = 27; // Compilation error: LETTERE does not name as type

    /*
    volatile: variabili cui valori si possono modificare se accessi nella memoria in esecuzione.
    */
    volatile int dati_memmorizzati = 1024;
    std::cout << "Volatile: " << dati_memmorizzati << " con lunghezza: " << sizeof(dati_memmorizzati) << " bytes." << std::endl;

}
