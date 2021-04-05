#include <stdio.h>
#include <stdlib.h>
#include "matris.h"
#include "time.h"

float **createMatrix(int n) {
    float **v =(float **)malloc(n*sizeof(float *));
    int i;

    for (i=0; i<n; i++) {
        v[i] = (float *)malloc(n * sizeof(float));
    }

    return v;
}

void printMatris(float **v,int n) {
    int i,j;

    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            printf("%.2f  \t",v[i][j]);
        }

        puts("");
    }

    puts("**************");
}

void fillArray(float **v,int n) {
    int i,j;

    //srand(time(0));
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            v[i][j] = (rand() %10 )+1;
        }
    }
}
float **multiply(float **v1, float **v2,int n) {
    puts("multiply ijk");
    clock_t t;
    t = clock();

    int i, j, k;
    float **result=createMatrix(n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            //result[i][j] = 0;
            for (k = 0; k < n; k++) {
                result[i][j] += v1[i][k] * v2[k][j];
            }
        }
    }

    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds

    printf("multiply took %f seconds to execute \n", time_taken);
    printf("\a");
    return result;
}

float **multiplyikj(float **v1, float **v2,int n) {
    puts("multiply ikj");
    clock_t t;
    t = clock();
    int i, j, k;
    float **result=createMatrix(n);

    for (i = 0; i < n; i++) {
        for (k= 0; k < n; k++) {
            for (j = 0; j < n; j++) {
                //result[i][k] += v1[i][j] * v2[j][k];
                result[i][j] += v1[i][k] * v2[k][j];
            }
        }
    }

    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds

    printf("multiply took %f seconds to execute \n", time_taken);


    printf("\a");
    return result;
}
float **multiplyjik(float **v1, float **v2,int n) {
    puts("multiply jik");
    clock_t t;
    t = clock();
    int i, j, k;
    float **result=createMatrix(n);

    for (j = 0; j < n; j++) {
        for (i = 0; i < n; i++) {
            //result[i][j] = 0;
            for (k = 0; k < n; k++) {
                result[i][j] += v1[i][k] * v2[k][j];
            }
        }
    }

    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds

    printf("multiply took %f seconds to execute \n", time_taken);


    printf("\a");
    return result;
}
float **multiplyjki(float **v1, float **v2,int n) {
    puts("multiply jki");
    clock_t t;
    t = clock();
    int i, j, k;
    float **result=createMatrix(n);

    for (j = 0; j < n; j++) {
        for (k = 0; k < n; k++) {
            //result[i][j] = 0;
            for (i = 0; i < n; i++) {
                result[i][j] += v1[i][k] * v2[k][j];
            }
        }
    }

    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds

    printf("multiply took %f seconds to execute \n", time_taken);


    printf("\a");
    return result;
}
float **multiplykij(float **v1, float **v2,int n) {
    puts("multiply kij");
    clock_t t;
    t = clock();
    int i, j, k;
    float **result=createMatrix(n);

    for (k = 0; k < n; k++) {
        for (i= 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                //result[i][k] += v1[i][j] * v2[j][k];
                result[i][j] += v1[i][k] * v2[k][j];
            }
        }
    }

    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds

    printf("multiply took %f seconds to execute \n", time_taken);

    printf("\a");
    return result;
}
float **multiplykji(float **v1, float **v2,int n) {
    puts("multiply kji");
    clock_t t;
    t = clock();
    int i, j, k;
    float **result=createMatrix(n);

    for (k = 0; k < n; k++) {
        for (j= 0; j < n; j++) {
            for (i = 0; i < n; i++) {
                //result[i][k] += v1[i][j] * v2[j][k];
                result[i][j] += v1[i][k] * v2[k][j];
            }
        }
    }

    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds

    printf("multiply took %f seconds to execute \n", time_taken);


    printf("\a");
    return result;
}

float **deneme2 (float **a,float **b,int c){
float **result=createMatrix(c);
return result;}
