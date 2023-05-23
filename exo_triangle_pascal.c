// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n ; 
    printf("donnez la taille de la matrice : ");
    scanf("%d",&n);
    
    int MAT[n][n];
    for(int i = 0 ;i<n;i++){
        MAT[i][0] = 1;
    }
    
    for(int i = 0 ;i<n;i++){
        MAT[i][i] = 1 ;
    }
    for(int i = 2 ; i<n;i++){
        for(int j = 1 ; j<n;j++){
            if(i>j){
                MAT[i][j] = MAT[i-1][j-1] + MAT[i-1][j];
            }
            if(j>i){
                MAT[i][j] =0;
            }
            
        }
    
    }
    
    //affichage de la matrice 
    printf("\n");
    for(int i = 0; i<n;i++){
        for(int j = 0 ; j<n;j++){
            
            printf("%d\t",MAT[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}
