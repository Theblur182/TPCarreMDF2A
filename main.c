#include <stdio.h>
#include <stdlib.h>




    int main()
{
    int longueur,largeur;
    int i=0;
    int j=0;
    printf("Quelle est la longueur de votre rectangle ?\n");
    scanf("%d",&longueur);
    printf("Quelle est la largeur de votre rectangle ?\n");
    scanf("%d",&largeur);
    for(i=0;i<largeur;i++){
   for(j=0;j<longueur;j++){
        if((i!=0) && (i!=largeur-1) && (j!=0) && (j!=longueur-1)){
            printf("M");
        }else {
        printf("*");
        }
        }
 printf("\n");
    }
   // }
    return 0;
}

