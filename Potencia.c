#include <stdio.h>
#include <stdlib.h>
//fatorial
int potencia (int x, int n)
{
    if(n == 0)
        return 1;
    else if(n > 0)
        return x * potencia(x, n-1);
}