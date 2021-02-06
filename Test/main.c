//Transpose of a matrix
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "trans.h"
#include "trans.c"
int main(void)
{
	int n,m;
	double *matrix,*transpose;
	printf("Enter n,m \n");
	scanf("%d %d",&n,&m);
	
	matrix = malloc(n*m * sizeof *matrix);
	transpose = malloc(m*n * sizeof *transpose);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			double t;
			printf("Enter (%d , %d) element \n",i+1,j+1);
			scanf("%lf",&t);
			matrix[i*m + j] = t;
			}
		}
		printf("\n The Original Matrix \n");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			int temp;
			printf("%.2lf ",matrix[i*m + j]);
			}
			printf("\n");
		}
	/* Sample built in matrix
	 * matrix[3][3] = [[1,2,3],[4,5,6],[7,8,9]];
	 */
	  trans(n,m,matrix,transpose);
	  
	  printf("\n Transposed Matrix \n");
	  for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			int temp;
			printf("%.2lf ",transpose[i*n + j]);
			}
			printf("\n");
		}
	return 0;
}

