#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <stdlib.h> 
#include <string.h>
int main()
{
SetConsoleOutputCP(437);
int i,j;
printf("\1\1\n");/*Êä³öÁ½¸öĞ¦Á³*/
for(i=1;i<11;i++)
{
for(j=1;j<=i;j++)
printf("%c%c",219,219);
printf("\n");
}
}
