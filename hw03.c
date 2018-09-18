#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int myArray[10];
    srand(time(NULL));
    for(int i = 0;i<10;i++)
        myArray[i] = rand();
    int myArray2[10];
    for(int i = 0;i<10;i++)
        myArray2[i] = rand();

    
    return 0;
}