#include <iostream>

using namespace std;

void* code() {
    return nullptr;
}

int main(int argc, char const *argv[]) {
    int stack = INT_MAX;
    int *heap = new int(INT_MIN);

    cout << "Stack (" << stack << "): " << &stack << endl;
    cout << "Heap (" << *heap << "): " << &heap << endl;
    cout << "text/code (code): " << (void*)&code << endl;
    cout << "text/code (main): " << (void*)&main << endl;

    delete heap;
    return 0;
}