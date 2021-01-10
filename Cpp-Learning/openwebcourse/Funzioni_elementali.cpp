/*
Santiago de Cali, 9, Gennaio, 2021.

Apprendimento da C a C++

- Funzioni elementali.
- bitset: sviluppare coi bits.
*/

#include <stdio.h>
#include <iostream>
#include <locale>
#include <bitset> // Bits map.

int main(){

    setlocale(LC_ALL,"italian");

    int numero_bit_uno = 0x0000001A; // esadecimale - 26 decimale.

    std::cout << numero_bit_uno << std::endl;

    std::cout << std::bitset<16>(numero_bit_uno) << std::endl;

    std::cout << std::bitset<16>(-numero_bit_uno) << std::endl;

    std::cout << std::bitset<16>( 0 & numero_bit_uno) << std::endl;

    std::cout << std::bitset<16>( 1 & numero_bit_uno) << std::endl;

    std::cout << std::bitset<16>( 0 | numero_bit_uno) << std::endl;

    std::cout << std::bitset<16>( 1 | numero_bit_uno) << std::endl;

    std::cout << std::bitset<16>( numero_bit_uno >> 2) << std::endl;

    std::cout << std::bitset<16>( numero_bit_uno << 3) << std::endl;

    int numero_intero = 2;
    std::cout << numero_intero << std::endl;

    float numero_float = 6.7999993f; // 6.8
    std::cout << numero_float << std::endl;

    numero_intero = static_cast<int>(numero_float); //cast statico necessario.
    std::cout << numero_intero << std::endl;

    numero_intero = numero_float; // Avvertimento di perdita di dati!
    std::cout << numero_intero << std::endl;
}
