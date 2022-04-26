//
// Created by Andreea Parlica on 15.04.2022.
//

#ifndef PROIECTCONTBANCAR_CONT_H
#define PROIECTCONTBANCAR_CONT_H
#include <iostream>
#include <string>
#include "Interfata_afisare.h"
//Clasa Cont este o clasa abstracta, ce nu poate fi instantiata

class Cont: public Interfata_Afisare {
private:
    //grupare constante
    static constexpr const char *nume_predefinit="Cont nedefinit";
    static constexpr double bilant_predefinit=0.0;
protected:
    std::string nume;
    double bilant;
public:
    Cont(std::string nume=nume_predefinit, double bilant=bilant_predefinit); //constructor
    //Metode
    virtual bool depozitare(double suma)=0; //pure virtual fuction
    virtual bool retragere(double suma)=0; //pure virtual function
    virtual void print(std::ostream &os) const override;
    virtual ~Cont()=default; //destructor virtual
};
#endif //PROIECTCONTBANCAR_CONT_H
