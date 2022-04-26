//
// Created by Andreea Parlica on 18.04.2022.
//
#include <iostream>
#include "ContUtil.h"

//Metoda ce afiseaza obiecte intr-un vector de obiecte ale clasei Cont

void afiseaza(const std::vector<Cont*> &conturi){
    std::cout<<"\n === Conturi =========================================="<<std::endl;
    for(const auto *cont:conturi){
        std::cout<<*cont<<std::endl; //foloseste supraincarcarea operatorului de insertie
    }
}

//Metoda de depozitare a sumei in fiecare cont obiect din vectorul ce contine conturi obicete ale clasei Cont

void depozitare(std::vector<Cont *> &conturi,double suma){
    std::cout<<"\n === Suma depozitata in conturi ========================"<<std::endl;
    for(auto *cont:conturi){
        if(cont->depozitare(suma))
            std::cout<<"Suma depozitata: "<<suma<<" catre "<<*cont<<std::endl;
        else
            std::cout<<"Depozitare esuata a sumei: "<<suma<<" catre contul"<<*cont<< std::endl;
    }
}

//Metoda de retragere a sumei din fiecare cont inclus in vectorul de obicete ale clasei Cont

void retragere(std::vector<Cont *> &conturi, double suma){
    std::cout<<"\n === Suma retrasa in conturi ========================"<<std::endl;
    for(auto *cont:conturi){
        if(cont->retragere(suma))
            std::cout << "Retragere suma: " << suma << " din contul " <<*cont << std::endl;
        else
            std::cout<<"Retragerea sumei "<<suma<<" din contul "<<*cont<<" a esuat!"<<std::endl;

        }
    }