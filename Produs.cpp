
#include <cstring>
#include "Produs.h"

using namespace std;

Produs::Produs() {
    pret = 1;
    marca = new char[2];
}

Produs::Produs(int pret, const char *marca, const Garantie &garantie) {
    this->pret = pret;
    this->marca = new char[strlen(marca)];
    strcpy(this->marca, marca);
    this->garantie = garantie;
}

Produs::Produs(const Produs &p) {
    this->pret = p.pret;
    this->marca = new char[strlen(p.marca)];
    strcpy(this->marca, p.marca);
    this->garantie = p.garantie;
}

Produs &Produs::operator=(const Produs &p) {
    this->pret = p.pret;
    this->marca = new char[strlen(p.marca)];
    strcpy(this->marca, p.marca);
    this->garantie = p.garantie;
}

int Produs::getPret() const { return this->pret; }

const char *Produs::getMarca() const { return this->marca; }

Garantie Produs::getGarantie() const { return this->garantie; }

std::ostream &operator<<(std::ostream &os, const Produs &p) {
    os << "Produs: " << p.marca << ", Pret: " << p.pret << ", " << p.garantie << "\n";
    return os;
}

std::istream &operator>>(std::istream &is, Produs &p) {
    int pret;
    char aux[100];
    is >> p.pret;
    cin >> aux;
    p.marca = new char[strlen(aux) + 1];
    strcpy(p.marca, aux);
    is >> p.garantie;
    return is;
}

Produs::~Produs() = default;


