#include "Garantie.h"
#include <cstring>
#include <stdexcept>

Garantie::Garantie(int nr_luni, const char *cod_service) {
    if (nr_luni < 3 || nr_luni > 36)
        throw std::invalid_argument("Numarul de luni trebuie sa fie intre 3 si 36.");
    if (strlen(cod_service) < 2 || strlen(cod_service) > 9)
        throw std::invalid_argument("Codul service trebuie sa aiba intre 2 si 9 caractere.");
    this->nr_luni = nr_luni;
    strcpy(this->cod_service, cod_service);
}

Garantie::Garantie(const Garantie &garantie) {
    this->nr_luni = garantie.nr_luni;
    strcpy(this->cod_service, garantie.cod_service);
}


int Garantie::getNrLuni() const { return nr_luni; }

const char *Garantie::getCodService() const { return cod_service; }

Garantie::Garantie() {
//    this->nr_luni = 3;
}

std::ostream &operator<<(std::ostream &os, const Garantie &g) {
    os << "Garantie pe " << g.nr_luni << " luni, cod : " << g.cod_service << "\n";
    return os;

}

std::istream &operator>>(std::istream &is, Garantie &g) {
    int nr_luni;
    char cod_service[10];
    is >> nr_luni >> cod_service;
    g = Garantie(nr_luni, cod_service);
    return is;
}

Garantie::~Garantie() = default;

