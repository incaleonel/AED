#include <iostream>
#include <cassert>

int main(int argc, char const *argv[])
{
//Tipo de dato Booleano

    bool A = true;
    bool B = false;

    assert(A and B == false);
    assert(A or B == true);
    assert(not A == false);

//Tipo de dato Entero

    int entero_1 = 3;
    int entero_2 = 7;

    assert(entero_1 + entero_2 == 10);
    assert(entero_1 - entero_2 == -4);
    assert(entero_1 * entero_2 == 21);
    assert(entero_1 / entero_2 == 0);

//Tipo de dato Caracter
    char letra_1 = 'A';
    char letra_2 = 'B';
    
    assert(letra_1 + 1 == letra_2);
    assert(letra_2 - 1 == 'A');
    assert(letra_2 + letra_1 == 'C');

//Tipo de dato con coma flotante

    float realf_1 = 1.1;
    float realf_2 = 5.3;

    assert(realf_1 + realf_2 == 6.4);
    assert(realf_1 - realf_2 == -4.2);
    assert(realf_1 * realf_2 == 5.83);
    assert(realf_1 / realf_2 == 0.2075471698);

    

    return 0;
}
