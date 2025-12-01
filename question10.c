#include <stdio.h>
// reading 2 ( 3 by 3 int matrice), then add their sum into a third matrix and print all 3 .

int main () {

int A[3][3] ,B[3][3], Sum[3][3] ;//intializing all the arrays that will be used as instructed.
                               
int i, n;
//prompt to answer and fill in matrix A
        printf("Enter (A's) matrix: ");
        for (i=0; i<3; i++)
                { 
         for (n =0; n<3; n++)   
                 {
                  scanf("%d", &A[i][n]); 
                 }       
            } 
 printf("Enter (B's) matrix: ");
        for (i=0; i<3; i++)
                { 
         for (n =0; n<3; n++)   
                 {
                  scanf("%d", &B[i][n]); 
                 }       
            }


for (i=0; i<3; i++) 
	{    for (n=0; n<3; n++)
		{ 
		Sum[i][n]= A[i][n] + B[i][n];
		}
	}
for (i=0; i <3; i++)
	{   for (n=0; n<3; n++)
		{
			printf ("%d\t",Sum[i][n]);
			 }
		printf("\n");
	}
return 0;
}

