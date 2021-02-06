//Transpose of a matrix
#include <stdio.h>
#include <stdlib.h>
#include "trans.h"
int trans(int n , int m,double* matrix,double* transpose)
{
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			transpose[i*n + j] = matrix[j*m+i];
		}
	}
	//matrix = transpose;
	return 0;
}

