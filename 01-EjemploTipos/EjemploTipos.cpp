#include <iostream>
#include <cassert>

int main()
{
//Tipo de dato Booleano
    assert (true);
    assert (false==false);
    assert (false!=true);
    assert (not false);
    assert (false == not true);
    assert (true and true);
    assert (false or true);
    assert ((false and false) == false);

// Tipo de dato double

    assert (2.0==1.0+1.0);
    assert (1.0==0.1*10.0);
    assert (2.1 - 0.1==2.0);
    assert (1.0!=0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1);

//Tipo de dato Entero

    assert(5 + 5 == 10);
    assert(-2 - 2 == -4);
    assert(7 * 7 != 21);
    assert(1 / 7 == 0);
    assert(2 > -1);

//Tipo de dato Caracter
    
    assert('A' + 1 == 'B');
    assert('B' - 1 == 'A');
    assert('A' + 'B' == 131);
    assert('A'!='a');
    assert('G'>'A');
//Tipo de dato unsigned

    return 0;
}


    