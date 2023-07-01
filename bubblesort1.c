/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    int lista[] = {10,5,6,7,8};
    int aux = 0;
    int x=6;
    int size = sizeof(lista)/sizeof(lista[0]);
    
    for(int i=1; i<size-1; i++){
        for(int j=0; j<size-1-i; j++){
            if(lista[j]>lista[j+1]){
                aux = lista[j];
                lista[j] = lista[j+1];
                lista[j+1]=aux;
            }
        }
    }
    
    for(x=0; x < 6; x++){
        printf("%d",lista[x]);
    }

    return 0;
}
