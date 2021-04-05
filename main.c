#include <stdio.h>
#include <stdlib.h>
#include "matris.h"
#include "time.h"

int main() {
    float **v1=createMatrix(3);
    fillArray(v1,3);
    //printMatris(v1,3);
    float **v2=createMatrix(3);
     fillArray(v2,3);
    //printMatris(v2,3);

    //printMatris(multiply(v1,v2,3),3);

    int n;

    float **(*MultiplyArray[6])(float **,float **,int)= {multiply,multiplyikj,multiplyjik,multiplyjki,multiplykij,multiplykji};
    int i;
    for(n=1000; n<=10000; n+=1000) {
        printf(" for n = %d \n",n);
        float **v1=createMatrix(n);
        fillArray(v1,n);

        float **v2=createMatrix(n);
        fillArray(v2,n);

        for(i=0; i<6; i++) {
            float **multiple=createMatrix(n);
            multiple=MultiplyArray[i](v1,v2,n);
            free(multiple);
        }free(v1); free(v2);

        puts("");
    }
    puts("!!!FINISHED!!!");

    return 0;
}
