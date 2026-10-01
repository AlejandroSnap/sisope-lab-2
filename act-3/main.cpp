#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    const int N = 5;
    int arr[N];
    int *p = arr;

    *(p) = 0;
    *(p + 1) = 1,
    *(p + 2) = 1;
    *(p + 3) = 2;
    *(p + 4) = 3;

    cout << "Valores: ";
    for(int &x: arr) {
        cout << x << " ";
    }

    cout << endl;

    cout << "Direcciones de memoria" << endl;
    cout << "direccion de arr: " << arr << endl;
    cout << "direccion de p: " << &p << endl;

    return 0;
}
