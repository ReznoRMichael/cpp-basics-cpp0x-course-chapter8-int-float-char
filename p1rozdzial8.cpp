#include <iostream>
int main()
{
    int to_jest_zmienna; // losowa, brak inicjalizacji
    unsigned int tylkoDodatnie;

    float zmiennoprzecinkowa;

    char jeden_znak; // losowa, brak inicjalizacji
    unsigned char rowniez_znak;

    int abc = - 53; // inicjalizacja poczatkowej wartosci

    tylkoDodatnie = 22; // inicjalizacja poczatkowej wartosci
    zmiennoprzecinkowa = 12.42; // inicjalizacja poczatkowej wartosci
    rowniez_znak = 'c'; // inicjalizacja poczatkowej wartosci

    std::cout << "Wypisujemy zmienne:" << std::endl;
    std::cout << "  to_jest_zmienna = " << to_jest_zmienna << std::endl;
    std::cout << "  tylkoDodatnie = " << tylkoDodatnie << std::endl;
    std::cout << "  abc = " << abc << std::endl;
    std::cout << "  zmiennoprzecinkowa = " << zmiennoprzecinkowa << std::endl;
    std::cout << "  jeden_znak = " << jeden_znak << std::endl;
    std::cout << "  rowniez_znak = " << rowniez_znak << std::endl;
    return 0;
}
