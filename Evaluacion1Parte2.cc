#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int a, par = 0, impar = 0;
    cout << "Ingrese numero: ";
    cin>>a;
    if(a % 2==0)
    cout << "El numero ingresado ha resultado siendo par" << endl;
    else
    cout << "El numero ingresado ha resultado siendo impar" << endl;
    getch();
}