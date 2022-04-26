//
// Created by Andreea Parlica on 22.04.2022.
//

#ifndef PROIECTCONTBANCAR_CONTCURENT_H
#define PROIECTCONTBANCAR_CONTCURENT_H
#include <iostream>
#include <string>
#include "Cont.h"

//clasa de verificare cont

class Cont_Curent: public Cont{
private:
    static constexpr const char *nume_predefinit="Cont nedefinit";
    static constexpr double bilant_predefinit=0.0;
    static constexpr double taxa_verificare=1.5;
public:
    Cont_Curent(std::string nume=nume_predefinit, double bilant=bilant_predefinit);
    virtual bool retragere(double suma) override;
    virtual bool depozitare(double suma) override;
    virtual void print(std::ostream &os) const override;
    virtual ~Cont_Curent()=default;
    //mosteneste metoda depozitare
};
#endif //PROIECTCONTBANCAR_CONTCURENT_H
