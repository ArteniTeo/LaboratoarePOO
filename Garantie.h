#ifndef GARANTIE_H
#define GARANTIE_H

#include <iostream>

class Garantie {
    int nr_luni;
    char cod_service[10];

public:
    Garantie();

    Garantie(int nr_luni, const char *cod_service);

    Garantie(const Garantie &other);

    ~Garantie();

    int getNrLuni() const;

    const char *getCodService() const;

    friend std::ostream &operator<<(std::ostream &os, const Garantie &p);

    friend std::istream &operator>>(std::istream &is, Garantie &g);
};

#endif
