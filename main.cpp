#include <vector>
#include "ContEconomii.h"
#include "ContUtil.h"
#include "ContIncredere.h"
#include "ContCurent.h"
#include <iostream>

using namespace std;

int main() {
    Cont_Economii frank {"Frank",5000};
    cout<<frank<<endl;
    
    Cont *c1=new Cont_Curent("Laryy", 10000);
    Cont *c2=new Cont_Economii("Moe",1000);
    Cont *c3=new Cont_Incredere("Curly");

    std::vector<Cont *> conturi{c1,c2,c3};

    afiseaza(conturi);
    depozitare(conturi, 1000);
    retragere(conturi,2000);

    afiseaza(conturi);
    delete c1;
    delete c2;
    delete c3;

    return 0;
}
