//
// Created by nathm on 06/10/2021.
//
#include <stdio.h>
#include "exercice.h"
#include "mesStructures.h"
#include "mesFonctions.h"
#define TAILLE_TABLEAU_MAX 100
void exercice1(){
    NombreRationnel monNbre1= saisir();
    affichage(monNbre1);
    printf("\n");
    NombreRationnel monNbre2= saisir();
    affichage(monNbre2);
    printf("\n");
    NombreRationnel resultat1 = addition(monNbre1,monNbre2);
    affichage(resultat1);
    NombreRationnel resultat2= multiplication(monNbre1,monNbre2);
    affichage(resultat2);

}


void exercice2(){
    int n=0;
    int i=0;
    int pg=0;
    printf("Saissisez le nombre de cases:");
    scanf("%d",&n);
    while(n>TAILLE_TABLEAU_MAX){
        printf("Saissisez un nombre valide:");
        scanf("%d",&n);
    }
    int tableau[n];
    for(i=0 ;i<n ;i++){
        printf("Veuillez saisir de la case %d\n", i++);
        scanf("%d", &tableau[i]);
    }
    for(i=0;i<n;i++){
        if (pg<tableau[i]){
            pg=tableau[i];

        }
    }
    printf("la plus grande valeur du tableau est %d",pg);
}
void exercice3(){
    int i=0;
    int j=0;
    int n=0;
    int tableau[3][4]={{0}};
    int copie [12];
    for(i=0 ;i<3 ;i++){
        for(j=0;j<4;j++) {
            printf("Veuillez saisir la valeur %d\n", i);
            scanf("%d", &tableau[i][j]);
        }
    }
    for(i=0 ;i<3 ;i++) {
        for (j = 0; j < 4; j++){
            copie[n]=tableau[i][j];
            n++;
        }
    }
    for(i=0 ;i<3 ;i++) {
        for (j = 0; j < 4; j++){
            printf("%d\t",tableau[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(n=0;n<12;n++) {
        printf("%d\t", copie[n]);
    }
}