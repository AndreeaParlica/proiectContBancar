//
// Created by Andreea Parlica on 23.04.2022.
//

#include <iostream>
#include "Interfata_afisare.h"

std::ostream &operator<<(std::ostream &os, const Interfata_Afisare &obiect){
    os.precision(2);
    os<<std::fixed;
    obiect.print(os);
    return os;
}
