#define SIZE_TAB 100 

#include <stdio.h>
#include <stdlib.h> //pour utiliser les macros [return]] EXIT_SUCCESS, dans cette librairie est écrit #define EXIT_SUCCESS 0. Ici 0 est associer à la macro EXIT_SUCCESS
#include <time.h> 




// int* random_tab()
// {
//     // Initialise le générateur de nombres aléatoires avec une graine basée sur l'heure actuelle
//     srand(time(0)); 
//     int tab_rand[SIZE_TAB]=rand() % 100 ;//L'opérateur % (modulo) limite la plage des résultats possibles à 100 valeurs (0 à 99).
//     return tab_rand;
// }



void maxrecherche(int tab){
    int max=0;
    int max_indice=0;
    for (int i=0;i<100;i++)
        {
            printf("le tableau en arg contient %d à l'indice %d",i ,tab[i]);
            
            if (tab[i]>tab)
                {
                    max=i;
                }
            else
            {
                min=i;


            }

        }
        

    printf("dans le tableau la valeur maximum est : %d, à l'indice %d ", tab[max_indice],max_indice);
}


void minrecherche(int tab){

    int min=0;
    int min_indice=0;
    for (int i=0;i<100;i++)
        {
            printf("le tableau en arg contient %d à l'indice %d",i ,tab[i]);
        
        if (tab[i]<tab[i-1])
            {
                min_indice=i;
                min=tab[i];
            }
        else
        {
            //min=i;
        }

        printf("\n l'indice du minimum est : %d , et le miminum vaut %d", min_indice,min);

    }
    

    printf("dans le tableau la valeur maximum est : %d , le min a pour valeur : %d", tab[max],tab[]);

    

}

int main (void) {
    
    int i;
    int tablo[SIZE_TAB];
    for(i=0; i< SIZE_TAB; i++)
        {
            srand(time(0)); 
            tablo[i]= rand()%100 ;
        }
    

    maxrecherche(tablo);
    minrecherche(tablo);




    return 0;
}










