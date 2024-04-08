#include "ComplexNumber.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    LIBRERIA_COMPLESSI::ComplexNumber z1(2, -3.14);
    cout << "z1: " << z1 << endl;

    LIBRERIA_COMPLESSI::ComplexNumber z2(5, 3.14);
    LIBRERIA_COMPLESSI::ComplexNumber somma = z1 + z2;
    cout << "z1 + z2 = " << somma << endl;

    LIBRERIA_COMPLESSI::ComplexNumber z3 = LIBRERIA_COMPLESSI::coniugato(z1);
    cout << "Il coniugato di " << z1 << " equivale a " << z3 << endl;

    LIBRERIA_COMPLESSI::ComplexNumber z4(2, -3.1399996);
    bool uguaglianza = z1 == z4;
    cout << setprecision(8) << "il numero complesso z1 = " << z1 << " e il numero complesso z4 = " << z4
        << " sono uguali? " << uguaglianza << endl;

    return 0;
}
