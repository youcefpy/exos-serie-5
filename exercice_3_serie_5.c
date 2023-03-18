
#include <stdio.h>

int main()
{
    int n , m ; 
    printf("donnez le nombre des lignes : ");
    scanf("%d",&n);
    
    printf("donnez le nombre des colonne : ") ;
    
    scanf("%d",&m);
    
    int A[n][m], B[m][n];
    
    //remplisage de la matrice A 
    
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            scanf("%d",&A[i][j]);
        }
    }
    
      for(int i = 0 ; i<n ;i++){
        for(int j = 0; j<m; j++){
            printf("%d |",A[i][j]);
        }
        printf("\n");
    }
    
    //la transposer de la matrice A 
    printf(" la matrice A est : \n");
    for( int i = 0; i<m;i++ ){
        for(int j = 0 ;j<n;j++){
            B[i][j] = A[j][i];
        }
    }
    

    
    //affichage de la matrice B (la trasposer de la matrice a )
    
    printf(" la matrice transposer de la matrice A est : \n");    
    for(int i = 0 ; i<m ;i++){
        for(int j = 0; j<n; j++){
            printf("%d |",B[i][j]);
        }
        printf("\n");
    }
    
    
    
    
    
    
    return 0;
}
