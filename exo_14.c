// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
   int A[3][3], v[3],B[3][1],p;
   p = 0 ; 
   for(int i = 0 ;i<3;i++){
       for(int j = 0 ;j<3;j++){
           printf("A[%d][%d] : ",i,j);
           scanf("%d",&A[i][j]);
       }
   }
   
   printf("\nremplir le vecteur v :\n");
   for(int i = 0;i<3;i++){
       printf("v[%d] : ",i);
       scanf("%d",&v[i]);
   }
   
   for(int i = 0 ;i<3;i++){
       p = 0;
       for(int j = 0 ;j<3;j++){
           p= p + (A[i][j] * v[j]);
       }
       B[i][0] = p ;
   }
   
   for(int i = 0 ;i<3;i++){
       printf("%d\n",B[i][0]);
   }

    return 0;
}
