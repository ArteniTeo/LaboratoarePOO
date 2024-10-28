#include <iostream>
#include <cstring>
#include "Garantie.h"
#include "Produs.h"

using namespace std;

void afiseazaProduseCuGarantie(Produs *produse, int n, const char *cod_service) {
    for (int i = 0; i < n; ++i) {
        if (produse[i].getGarantie().getNrLuni() > 12 &&
            strcmp(produse[i].getGarantie().getCodService(), cod_service) == 0) {
            cout << produse[i] << endl;
        }
    }
}

int main() {

//    Garantie g1 = Garantie(3, "0003");
//    Garantie g2 = Garantie(12, "0012");
//    Garantie g3 = Garantie(36, "0036");
//
//    {
////    int nrLuni;
////    char codServ[10];
////    cin >> nrLuni >> codServ;
////    Garantie g2 = Garantie(nrLuni, codServ);
////    Garantie g3 = Garantie(g2);
////    Garantie g4 = g2;
//    }
//
//    Produs Frigider = Produs(900, "Frigo", g3);
//    Produs Feon = Produs(200, "Beauty", g2);
//    Produs ControlerPS5 = Produs(80, "PS5C", g1);
//    Produs AltControlerPS5 = ControlerPS5;
//
//    cout << Frigider << Feon << AltControlerPS5;

    int n;
    cin >> n;
    Produs *listaProduse = new Produs[n];

    for (int i = 0; i < n; ++i) {
        cout << "Introdu produsul " << i + 1 << " --> (pret, marca, nrLuni, codService)\n";
        try {
            cin >> listaProduse[i];
            cout << listaProduse[i];
        } catch (const exception &e) {
            cerr << "Eroare la citirea/afisarea produsului " << (i + 1) << ": " << e.what() << endl;
        }
    }

    char codServiceCoautatTemp[20];
    cin >> codServiceCoautatTemp;
    char *codServiceCautat = new char[strlen(codServiceCoautatTemp)];
    strcpy(codServiceCautat, codServiceCoautatTemp);

    afiseazaProduseCuGarantie(listaProduse, n, codServiceCautat);

    return 0;
}
