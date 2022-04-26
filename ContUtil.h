//
// Created by Andreea Parlica on 18.04.2022.
//

#ifndef PROIECTCONTBANCAR_CONTUTIL_H
#define PROIECTCONTBANCAR_CONTUTIL_H
#include <vector>
#include "Cont.h"


//Functii utile pemntru clasa Cont *

void afiseaza(const std::vector<Cont *> &conturi);
void depozitare(std::vector<Cont *> &conturi, double suma);
void retragere(std::vector<Cont *> &conturi, double suma);


#endif //PROIECTCONTBANCAR_CONTUTIL_H

//Functii utile pentru clasa VerificareCont

