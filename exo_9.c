#include <stdio.h>
#include <stdbool.h>
int main()
{
   int A[3][3],SD,SDI,SC,SL;
   int magic_nbr = 0 ; 
   bool est_magic = true ;
   SD = SDI = SC = SL = 0; 
   for(int i = 0 ; i<3;i++){
       for(int j = 0 ;j<3;j++){
           printf("A[%d][%d] : ",i,j);
           scanf("%d",&A[i][j]);
       }
   }
   
    for(int i = 0 ; i<3;i++){
       for(int j = 0 ;j<3;j++){
         if(i == j ){
             SD = SD + A[i][j]; 
         }
       }
   }
   
     for(int i = 0 ; i<3;i++){
       for(int j = 2 ;j>=0;j--){
         if(i == 2 - j ){
             SDI = SDI + A[i][j]; 
         }
       }
   }
   for(int j = 0;j<3;j++){
       magic_nbr += A[0][j];
       
   }
    for(int i = 0 ; i<3;i++){
       for(int j = 0 ;j<3;j++){
           printf("%d\t",A[i][j]);
       }
       printf("\n");
   }
   for(int i = 0 ; i<3;i++){
       for(int j = 0;j<3;j++){
           SL = SL + A[i][j];
           SC = SC + A[j][i];
       }
       if(magic_nbr != SL && magic_nbr != SC && magic_nbr != SD && magic_nbr != SDI ){
           est_magic = false;
           i = 3+1;
       }
   }
   if(est_magic == true){
       printf("la matrice est magic \n");
   }
   else{
       printf("la matrice n'est pas magic\n");
   }
   printf("%d\n",magic_nbr);
   printf("%d\n",SD);
   printf("%d\n",SDI);
   

    return 0;
}
