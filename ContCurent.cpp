//
// Created by Andreea Parlica on 22.04.2022.
//
#include "ContCurent.h"

//constructor
Cont_Curent::Cont_Curent(std::string nume, double bilant)
    :Cont{nume,bilant}{     //apeleaza contructorul clasei parinte
}
bool Cont_Curent::retragere(double suma) {
    suma += taxa_verificare;
    return Cont::retragere(suma);
}

bool Cont_Curent::depozitare(double suma) {
        return Cont::depozitare(double (suma));
}

void Cont_Curent::print(std::ostream &os) const {
    os.precision(2);
    os<<std::fixed;
    os<<"[Cont curent: "<<nume<<": "<<bilant<<"]";
}
