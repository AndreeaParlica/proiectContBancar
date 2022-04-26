//
// Created by Andreea Parlica on 22.04.2022.
//

#ifndef PROIECTCONTBANCAR_CONTINCREDERE_H
#define PROIECTCONTBANCAR_CONTINCREDERE_H
#include "ContEconomii.h"

class Cont_Incredere: public Cont_Economii{
private:
    static constexpr const char *nume_predefinit="Cont de incredere nedefinit";
    static constexpr double bilant_predefinit=0.0;
    static constexpr double comision_predefinit = 0.0;
    static constexpr double suma_bonus=50.0;
    static constexpr double suma_limita_retragere=5000.0;
    static constexpr int nr_maxim_retrageri=3;
    static constexpr double procentaj_maxim_retrageri=0.2;
protected:
    int numar_retrageri;
public:
    Cont_Incredere(std::string nume=nume_predefinit,double bilant=bilant_predefinit,double comision=comision_predefinit);

    //metoda de depozitare a 5000 Eur sau mai mult si se va primi un bonut de 50 euro
    virtual bool depozitare(double suma) override;

    //se permite doar 3 retrageri din cont, fiecare poate fi maxim 20% din suma depozitata in cont
    virtual bool retragere(double suma) override;
    virtual void print(std::ostream &os) const override;
    virtual ~Cont_Incredere()=default;
};
#endif //PROIECTCONTBANCAR_CONTINCREDERE_H
