/* 
 * File:   main.c
 * Author: Krystian Adamczak
 *
 * Created on 21 październik 2013, 14:03
 */

#include <stdio.h>
#include <stdlib.h>
#include <float.h>
#include <math.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    float epsFloat = 1, minFloat = 1, maxFloat = pow(10, 37), bmaxFloat;
    double epsDouble = 1, minDouble = 1, maxDouble = pow(10, 308), bmaxDouble;
    long double epsLDouble = 1, minLDouble = 1, maxLDouble = pow(10, 308), bmaxLDouble;
    
    //float 32bity
    printf("===FLOAT===\n");
    while ((float) (epsFloat * 0.5 + 1) != 1.0) {
        epsFloat *= 0.5;
    }
    if(epsFloat == FLT_EPSILON && 1.0+epsFloat>1) {
        printf("epsilon obliczony = %.10e epsilon z float.h = %.10e \n", epsFloat, FLT_EPSILON);
    }
    while ((float) (minFloat / 2.0) != 0) {
        minFloat *= 0.5;
    }
    if(minFloat > 0.0) {
        printf("min obliczony = %e min z float.h = %e \n", minFloat, FLT_MIN);
    }
    while ((float) isinf(maxFloat*(1.0+epsFloat)) == 0) {
        bmaxFloat = maxFloat;
        maxFloat *= (1.0+epsFloat);
    }
    printf("max obliczony = %e max z float.h %e \n", bmaxFloat, FLT_MAX);
    
    
    //double 64bity
    printf("===DOUBLE===\n");
    while ((double) (epsDouble * 0.5 + 1) != 1.0) {
        epsDouble *= 0.5;
    }
    if(epsDouble == DBL_EPSILON) {
        printf("DOUBLE epsilon obliczony = %.10e epsilon z float.h = %.10e \n", epsDouble, DBL_EPSILON);
    }
    while ((double) (minDouble / 2.0) != 0) {
        minDouble *= 0.5;
    }
    if(minDouble > 0.0) {
        printf("min obliczony = %e min z float.h = %e \n", minDouble, DBL_MIN);
    }
    while ((double) isinf(maxDouble*(1.000000001)) == 0) {
        bmaxDouble = maxDouble;
        maxDouble *= (1.000000001);
    }
    printf("max obliczony = %e max z float.h %e \n", maxDouble, DBL_MAX);
    
    
    //long double do 80bitow
    printf("===LONG DOUBLE===\n");
    while ((long double) (epsLDouble * 0.5 + 1) != 1.0) {
        epsLDouble *= 0.5;
    }
    if((epsLDouble == LDBL_EPSILON) && (1.0+epsLDouble>1.0)) {
        printf("LONG DOUBLE epsilon obliczony = %.Le epsilon z float.h = %.Le \n", epsLDouble, LDBL_EPSILON);
    }
    while ((long double) (minLDouble / 2.0) != 0) {
        minLDouble *= 0.5;
    }
    if(minLDouble > 0.0) {
        printf("min obliczony = %Le min z float.h = %Le \n", minLDouble, LDBL_MIN);
    }
    while ((long double) isinf(maxLDouble*(1.5)) == 0) {
        bmaxLDouble = maxLDouble;
        maxLDouble *= (1.5);
    }
    while ((long double) isinf(maxLDouble*(1.00001)) == 0) {
        bmaxLDouble = maxLDouble;
        maxLDouble *= (1.00001);
    }
    while ((long double) isinf(maxLDouble*(1.0000001)) == 0) {
        bmaxLDouble = maxLDouble;
        maxLDouble *= (1.0000001);
    }
    printf("max obliczony = %Le max z float.h %Le \n", maxLDouble, LDBL_MAX);
    
    return (EXIT_SUCCESS);
}

