#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int x = 90;
    int *ptrx = &x;
    *ptrx = 12;

    int &ref = x;
    ref = 82;

    cout << "Direcciones de memoria" << endl;
    cout << "Direccion de x: " << &x    << endl;
    cout << "Direccion ptrx:" << ptrx  << endl;
    cout << "Direccion propia de ptrx:" << &ptrx << endl;
    cout << "Direccion de ref:" << &ref << endl << endl; 

    cout << "VALORES" << endl;
    cout << "Valor de x:      " << x      << endl;
    cout << "Valor de *ptrx:  " << *ptrx  << endl;
    cout << "Valor de ref:    " << ref    << endl;

    return 0;
}
