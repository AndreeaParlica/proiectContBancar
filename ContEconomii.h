//
// Created by Andreea Parlica on 18.04.2022.
//

#ifndef PROIECTCONTBANCAR_CONTECONOMII_H
#define PROIECTCONTBANCAR_CONTECONOMII_H
#include "Cont.h"
#include <string>

//Cont de economii care este un tip de cont ce adauga un comision si are o metoda de retragere asemanatoare cu cea din
//clasa Cont si o metoda de depozitare: suma care va fi adaugata in cont va fi incrementata cu (suma * comision/100)
//iar suma finala rezultata va fi adaugata in contul de economii

class Cont_Economii: public Cont {
private:
    static constexpr const char *nume_predefinit = "Cont de economii nedefinit"; //valori predefinite in cazul in care
    static constexpr double bilant_predefinit=0.0;                                 //nu sunt furnizate la instantierea obiectului -C++11
    static constexpr double comision_predefinit = 0.0;
protected:
    double comision;
public:
    Cont_Economii(std::string nume=nume_predefinit,double bilant=bilant_predefinit,double comision=comision_predefinit);
    virtual bool depozitare(double suma) override;
    virtual bool retragere(double suma) override;
    virtual void print(std::ostream &os) const override;
    ~Cont_Economii()=default;
};
#endif //PROIECTCONTBANCAR_CONTECONOMII_H
