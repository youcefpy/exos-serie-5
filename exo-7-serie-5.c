#include <stdio.h>
#include <stdbool.h>
int main()
{
    // matrice identité 
    int mat[3][3] ;
    bool est_identite ;
    
    // repmlisage de la matrice ; 
    
    for(int i = 0 ; i<3;i++){
        for(int j = 0 ; j <3;j++){
            printf("mat[%d][%d] : ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    
       for(int i = 0 ; i<3;i++){
        for(int j = 0 ; j <3;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    
    //verification si la matice est identité ou pas 
    // la diagonale va etre des 1 si i == j alors mat[i][j] = 1 
    // le quand i != j mat[i][j] = 0
    est_identite =true ;
    for(int i = 0 ; i<3;i++){
        for(int j =0 ;j<3;j++){
            if(i==j && mat[i][j]!=1){
                est_identite = false;
            }
            if(i!=j && mat[i][j] != 0){
                est_identite = false;
                
            }
        }
    }
    if(est_identite==true){
        printf("la matrice est identique.");
    }else{
        printf("la matrice n'est pas identique.");
    }
    
    return 0;
}
