/* 
 * File:   z2.c
 * Author: Krystian Adamczak
 *
 * Created on 25 październik 2013, 17:08
 */

#include <stdio.h>
#include <stdlib.h>
#include <float.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float epsFloat;
    double epsDouble;
    long double epsLDouble;

    epsFloat = 3.0 * (4.0 / 3.0 - 1.0) - 1.0;
    epsDouble = 3.0 * (4.0 / 3.0 - 1.0) - 1.0;
    epsLDouble = 3.0 * (4.0 / 3.0 - 1.0) - 1.0;
    printf("===EPSILONY===\n");
    printf("float = %e\ndouble = %e\nlong double = ", epsFloat, epsDouble);
    printf("%Le", epsLDouble);
    printf("\n===float.h===\n");
    printf("float = %e\ndouble = %e\nlong double = %Le", FLT_EPSILON, DBL_EPSILON, LDBL_EPSILON);
    
    return (EXIT_SUCCESS);
}

