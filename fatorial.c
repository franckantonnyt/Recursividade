#include <stdio.h>
#include <stdlib.h>
//fatorial
int main()
{
int fat, n;
printf("Fatorial de ");
scanf("%i", &n);
 
for(fat = 1; n > 1; n = n - 1)
fat = fat * n;
 
printf("\nFatorial calculado: %i", fat);
return 0;
}