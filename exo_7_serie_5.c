#include <stdio.h>
#include <stdbool.h>

int main (){

    //nbr d'occurance d'un element donneer dans la matrice a 
    int A[3][3], nbr_apparition =0 , nbr;

    //remplissage de la matrice ; 
    for(int i = 0 ; i<3;i++){
        for(int j = 0 ;j<3;j++){
            printf("A[%d][%d]",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    //affichage de la matrice 
     for(int i = 0 ; i<3;i++){
        for(int j = 0 ;j<3;j++){
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }

    printf("enter un nombre svp : ");
    scanf("%d",&nbr);
    printf("le nbr enter est : %d\n",nbr);

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            if (nbr == A[i][j])
            {              
                nbr_apparition = nbr_apparition +1 ;
            }
            
        }
    }

    printf("le nombre d'apparition du nombre %d nbr est : %d ",nbr,nbr_apparition);
    
    



}
