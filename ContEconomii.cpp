//
// Created by Andreea Parlica on 18.04.2022.
//
#include "ContEconomii.h"

//Constructorul

Cont_Economii::Cont_Economii(std::string nume, double bilant, double comision)
    : Cont{nume,bilant},comision{comision}{ //constructorul clasei Cont este apelat
}

//metoda de depozitare suma:
//  Suma depozitata va fi incrementata cu formula: suma * comision/100 si va fi adaugata la suma din cont

bool Cont_Economii::depozitare(double suma){
    suma += suma * (comision/100);
    return Cont::depozitare(suma); //returneaza rezultatul returnat de metoda din clasa Cont;
}
bool Cont_Economii::retragere(double suma) {
    return Cont::retragere(suma);
}
void Cont_Economii::print(std::ostream &os) const{
    os <<"[Cont Economii: "<<nume << ": "<<bilant <<", "<<comision << "%]";
}
