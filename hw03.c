#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int myArray[10];
    srand(time(NULL));
    printf("Array #0:\n");
    for(int i = 0;i<10;i++){
        myArray[i] = rand();
    	printf("Element #%d, value: %d \n ",i,myArray[i]);
    }
    printf("\n");
    int myArray2[10];
    printf("Array #1:\n");
    for(int i = 0;i<10;i++){
        *(myArray2+i) = rand();
    	printf("Element #%d, value%d \n ",i,*(myArray2+i));
    }
    printf("\n");
    return 0;
}
