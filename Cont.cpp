//
// Created by Andreea Parlica on 15.04.2022.
//
#include "Cont.h"
#include <string>
//Constructor implementat

Cont::Cont(std::string nume, double bilant)
    :nume{nume},bilant{bilant} {
    }

bool Cont::depozitare(double suma) {
    if (suma<0)
        return false;
    else{
        bilant += suma;
        return true;
    }
}

bool Cont::retragere(double suma) {
    if (bilant - suma >= 0) {
        bilant -= suma;
        return true;
    } else {
        return false;
    }
}

void Cont::print(std::ostream &os) const {
    os.precision(2);
    os << std::fixed;
    os << "[Cont " << nume << ": " << bilant << " ]";
}


//trebuie sa mai supraincarc un operator...