#ifndef PRODUS_H
#define PRODUS_H

#include <iostream>
#include "Garantie.h"

class Produs {
    int pret;
    char *marca;
    Garantie garantie;

public:
    Produs();

    Produs(int pret, const char *marca, const Garantie &garantie);

    Produs(const Produs &p);

    Produs &operator=(const Produs &p);

    ~Produs();

    int getPret() const;

    const char *getMarca() const;

    Garantie getGarantie() const;

    friend std::ostream &operator<<(std::ostream &os, const Produs &p);

    friend std::istream &operator>>(std::istream &is, Produs &p);
};

#endif
