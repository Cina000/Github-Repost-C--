#include <iostream>

int main() {
    int eded1, eded2, cem;

    // İstifadəçidən ədədlərin daxil edilməsi
    std::cout << "Birinci ededi daxil edin: ";
    std::cin >> eded1;
    std::cout << "İkinci ededi daxil edin: ";
    std::cin >> eded2;

    // Ədədlərin cəmini hesablama
    cem = eded1 + eded2;

    // Cəmi çıxarış
    std::cout << "Ededlerin cemi: " << cem << std::endl;

    return 0;
}
