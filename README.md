# sisope-lab-2

## act-1
En el programa `main.cpp` de `act-1`, se declaran una variable de tipo entero `x` que almacena el número `155`, para posteriormente imprimir tanto su valor como su dirección en memoria. Despues de dicha impresión, se declara un apuntador de memoria `*ptrx` que almacena la dirección en memoria de la variable `x` y actualiza su valor de `155` a `15`. Para luego, imprimir el nuevo valor actualizado y la dirección de memoria del apuntador `*ptrx` que es igual a la dirección de memoria de la variable `x` que se declaro al inicio.

## act-2
En el programa `main.cpp` de `act-2`, se declaran las siguientes variables de tipo entero: `x` almacena el número `90`, `*ptrx` un apuntador que almacena la dirección en memoria de `x`. Despues de dichas declaraciones, se actualiza el valor de la varible `*ptrx` de `90` a `12` (al este ser un puntero que apunta a la variable `x`, el valor de `x` tambien cambia). Ahora, se declara una nueva variable `ref` que es una referencia a la variable `x` y se actualiza el valor de `raf` a `82`. Para seguidamente, imprimir las direcciones de memoria de: `x`, `ptrx`, `&ptrx` (aunque `ptrx` sea un puntero, este tambien cuenta con su direcciones de memoria propia), `ref`.

## act-3
En el programa `main.cpp` de `act-3`, se declaran las siguientes variables de tipo entero: `N` que almacena el número `5`, que sera el tamaño de un arreglo, `arr` un arreglo de `N` posiciones y `*p` un apuntador que apunta a el arreglo previamente creado. Despues de dichas asignaciones, se les asigna un valor a cada posición en el arreglo `arr`, (dado que en un arreglo, la memoria entre posiciones es contigua, basta con sumarle un valor entre `0 <= i < N`, para acceder o modificar dicho un valor en esa posición)

```cpp
    // Demostración
    *(p + 0) = 0;
    *(p + 1) = 1,
    *(p + 2) = 1;
    *(p + 3) = 2;
    *(p + 4) = 3;
```

Despues de dichas asignaciones, se imprimen los valores en el arreglo `arr` que se asignaron, para posteriormente imprimir las dirección en memoria de: `arr` y del apuntador `*p`.

## act-4
En el programa `main.cpp` de `act-4`, se declaran las siguientes variables de tipo entero: `N` que al macena el número `2`, que corresponde al número de filas y número de columnas de una matriz, `M` un arreglo de `2D` que se crea con memoria dinamica. Luego, se llena la matriz `M` de `NxN`, con `1's` en la diagonal y `0's` en las demas posiciones. Despues, se imprime la matriz y luego la dirección en memoria de la matriz `M` y su dirección en memoria propia. Para completar, como buena practica, se borra la memoria dinamica que se creo al momento de declarar la matriz, debido a que al crear memoria dinamica, el programador es el responsable de borrar dicha memoria.

## extra
En el programa `main.cpp` de `extra`, se declaran las siguienstes variables de tipo entero: `stack` un entero arbitrario, `heap` un entero con memoria dinamica. Para posteriormente imprimir las direcciones de `stack`, `heap`, `text/code`. 