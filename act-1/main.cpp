#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    int x = 155;
    cout << "Valor de la variable: " << x << "\nDireccion de memoria: " << &x << endl << endl;
    
    int *ptrx = &x;
    *ptrx = 15;

    cout << "Valor de la variable: " << x << "\nDireccion de memoria: " << ptrx << endl;

    return 0;
}
