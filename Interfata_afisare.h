//
// Created by Andreea Parlica on 23.04.2022.
//
#include <iostream>

#ifndef PROIECTCONTBANCAR_INTERFATA_AFISARE_H
#define PROIECTCONTBANCAR_INTERFATA_AFISARE_H
class Interfata_Afisare{
public:
    virtual void print(std::ostream &os) const=0;
    virtual ~Interfata_Afisare()=default;
};
#endif //PROIECTCONTBANCAR_INTERFATA_AFISARE_H
