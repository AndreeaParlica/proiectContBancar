//
// Created by Andreea Parlica on 22.04.2022.
//
#include "ContIncredere.h"
#include <string>

//constructorul
Cont_Incredere::Cont_Incredere(std::string nume, double bilant, double comision):
    Cont_Economii(nume, bilant,comision), numar_retrageri{0}{

}
//Metoda de depozitare ce va adauga 50 euro la fiecare depoziutare >=5000 euro
bool Cont_Incredere::depozitare(double suma) {
    if(suma>=suma_limita_retragere)
        suma +=suma_bonus;
    return Cont_Economii::depozitare(suma);
}

//Metoda ce permite 3 retrageri, fiecare nu mai mare de 20% din suma din cont
bool Cont_Incredere::retragere(double suma) {
    if(numar_retrageri>=nr_maxim_retrageri || (suma > bilant * procentaj_maxim_retrageri))
        return false;
    else{
        ++ numar_retrageri;
        return Cont_Economii::retragere(suma);
    }
}
void Cont_Incredere::print(std::ostream &os) const{
    os.precision(2);
    os<<std::fixed;
    os<<"[Cont Incredere: "<<nume<<": "<<bilant<<", "<<comision<<"%, numar retrageri: "<<numar_retrageri<<"]";
}
