/*
Santiago de Cali, 9, Gennaio, 2021.

Apprendimento da C a C++

- Scope:  scopo delle variabili.

*/

#include <stdio.h>
#include <locale>
#include <iostream>

int main()
{

    setlocale(LC_ALL, "italian");

    int numero = 2;

    // Nuovo scopo:
    {
        int numero_limitato = 90;
        numero = numero + numero_limitato; // successo dell'operazione.s
    }

    std::cout<<"Numero = " << numero << " con lunghezza: " << sizeof(numero) << " bytes." << std::endl;

    // numero = numero_limitato; // Compilation error: numero_limitato was not declare in this scope.

}
