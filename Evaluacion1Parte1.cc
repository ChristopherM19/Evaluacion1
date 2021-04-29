#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int CostoCarrera, CostoInicial, CuotasMensuales, a;
    cout << "Ingrese el costo de la carrera: ";
    cin>>CostoCarrera;
    CostoInicial = CostoCarrera * 0.20;
    a = CostoCarrera * 0.80;
    CuotasMensuales = a / 36;

    cout << "El 20% del costo completo a pagar como inicial es: " << CostoInicial << endl;
    cout << "Las cuotas a pagar cada mes seran de: " << CuotasMensuales << endl;
    getch();
}
