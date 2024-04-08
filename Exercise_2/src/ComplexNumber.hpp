#pragma once

#include <iostream>

using namespace std;

// inserisco tutto in un'unica libreria
namespace LIBRERIA_COMPLESSI{

struct ComplexNumber{
    double parte_reale;
    double parte_immaginaria;

    ComplexNumber() = default;
    // Definisco come si deve comportare la struttura di default e quando passo parametri
    ComplexNumber(double a, double b){
        parte_reale = a;
        parte_immaginaria = b;
    }
};

ostream& operator<<(ostream& os, const ComplexNumber &z);

ComplexNumber operator+(const ComplexNumber &z1, const ComplexNumber &z2);

bool operator==(const ComplexNumber &z1, const ComplexNumber &z2);

ComplexNumber coniugato(ComplexNumber &z);
}
