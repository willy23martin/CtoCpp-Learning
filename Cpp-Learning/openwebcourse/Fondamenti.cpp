/**
=====================================
Autore: William Martín Chávez González
Data: 2 di novembre, 2020
Riferimenti:
- Openwebinars: https://openwebinars.net/academia/aprende/introduccion-c
- C++ - sizeof: https://en.cppreference.com/w/cpp/language/sizeof
=====================================
*/

/**
Procedura Linker: #include <codice per la procedura Linker>
*/
#include <iostream>

int main() {

    // Per stampare nella console:
    std::cout << "Fondamenti di Cpp (C++) in Italiano\n" <<std::endl;

    /** Tipi di Dati*/

    // Variabile Bool:
    bool b = true;
    std::cout << "Variabile Boolean: " << b << " avec sa taglia in bytes: " << sizeof(b) << "bytes \n" << std::endl;

    /**
     Character: codice ASCII: https://it.wikipedia.org/wiki/ASCII
     - 1 byte
     */
    char ch = 65;
    std::cout << "Variabile character: " << ch << " avec sa taglia in bytes: " << sizeof(ch) << "bytes \n" << std::endl;

    /**
     Wide Character:
     - Per rapprasentare altri lingue come il cino o iul giapponese.
     - Altri codici di characters come UNICODE.
     - Avvertimento: occupa 2 bytes.
     */
     wchar_t wch_t = 'A';
     std::cout << "Variabilie wide character: " << wch_t << " avec sa taglia in bytes: " << sizeof(wch_t) << " bytes\n"<< std::endl;

     /** Interi:
      - Sono numeri interi di:
         * int -> 4 bytes
         * int8_t -> 8 bytes
         * int16_t -> 16 bytes
         * int32_t -> 32 bytes
         * int64_t -> 64 bytes
     */
     int intero = 9999;
     std::cout << "Variabile intera: " << intero << " avec sa taglia in bytes: " << sizeof(intero) << " bytes\n" << std::endl;

     /**
        Decimali:
        - double -> 8 bytes, doppio numeri di decimal => meglior precisione
        - float -> 4 bytes
          * float_denorm_style -> http://www.cplusplus.com/reference/limits/float_denorm_style/
          * float_round_style -> http://www.cplusplus.com/reference/limits/float_round_style/
     */
     double doub = 90.9876224;
     float fl = 90.9876224;
     std::cout << "Varibile decimale double: " << doub << " avec sa taglia in bytes: " << sizeof(doub) << " bytes \n" << std::endl;
     std::cout << "Varibile decimale float: " << fl << " avec sa taglia in bytes: " << sizeof(fl) << " bytes \n" << std::endl;

     /**
        Puntatore: a un indirizzo di memoria
        - 0
        - nullptr -> puntatore

     int p = 90;
     int *puntatore = nullptr;
     std::cout << std::endl <<  "Variabile puntatore/puntatrice: " << *puntatore << " avec taglia: "  << " bytes\n";

     puntatore = &p;
     std::cout << std::endl << "Variabile puntatore/puntatrice: " << *puntatore << " avec taglia: "  << " bytes\n" << puntatore;
     */
     /**
     ENUM
     */
     enum MESE
     {
        GENNAIO = 1,
        FEBBRAIO = 2,
        MARZO = 3,
        APRILE = 4,
        MAGGIO = 5,
        GIUGNO = 6,
        LUGLIO = 7,
        AGOSTO = 8,
        SETTEMBRE= 9,
        OTTOBRE = 10,
        NOVEMBRE=11,
        DICEMBRE = 12
     };
     MESE mese (MESE::GENNAIO);
     mese = MESE::OTTOBRE;
     std::cout << MESE::GENNAIO << std::endl;
     std::cout << mese << std::endl;

     /**
     Arrays:
     */
     int i[10]{1,20,30,4,50,6,7,80,90,1};
     std::cout << "Variabile elenco con puntatore:" << i << std::endl;
     std::cout << "Variabile elenco:" << i[6] << std::endl;

    return 0;
}
