#include "ComplexNumber.hpp"
#include <cmath>

namespace LIBRERIA_COMPLESSI{

ostream& operator<<(ostream& os, const ComplexNumber &z){
    if (z.parte_immaginaria == 0)
        os << z.parte_reale;
    else if (z.parte_reale == 0)
        (os << z.parte_immaginaria) << "i";
    else if (z.parte_immaginaria > 0)
        (((os << z.parte_reale) << "+") << z.parte_immaginaria) << "i";
    else
        ((os << z.parte_reale) << z.parte_immaginaria) << "i";
    return os;
}

ComplexNumber operator+(const ComplexNumber &z1, const ComplexNumber &z2){
    double reale = z1.parte_reale + z2.parte_reale;
    double immaginario = z1.parte_immaginaria + z2.parte_immaginaria;
    ComplexNumber z(reale, immaginario);
    return z;
}

bool operator==(const ComplexNumber &z1, const ComplexNumber &z2){
    double tolleranza = 1.00e-06;
    if (abs(z1.parte_reale - z2.parte_reale) < tolleranza && abs(z1.parte_immaginaria - z2.parte_immaginaria) < tolleranza)
        return 1;
    else
        return 0;
}

ComplexNumber coniugato(ComplexNumber &z){
    double con = -z.parte_immaginaria;
    ComplexNumber numero_coniugato(z.parte_reale, con);
    return numero_coniugato;
}

}
