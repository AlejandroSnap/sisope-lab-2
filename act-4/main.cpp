#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int N = 2;
    int **M = new int*[N];

    for(int i = 0; i < N; i++) {
        M[i] = new int[N];
    }

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            int num = 0;
            if(i == j) {
                num = 1;
            }
            M[i][j] = num;
        }
    }

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cout << M[i][j] << " ";
        }

        cout << endl;
    }

    cout << "Direccion del array: " << M << endl;
    cout << "Direccion propia de M: " << &M << endl;

    for(int i = 0; i < N; i++) {
        delete[] M[i];
    }

    delete[] M;

    return 0;
}
