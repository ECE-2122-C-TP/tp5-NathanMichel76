//
// Created by nathm on 06/10/2021.
//

#include <stdio.h>
#include "mesStructures.h"
NombreRationnel saisir(){
    NombreRationnel p;
    printf("Saisir numerateur :\n");
    scanf("%d",&p.num);
    printf("Saisir demnominateur :\n");
    scanf("%d",&p.dem);
    return p;
}

void affichage(NombreRationnel p){
    printf("le numerateur est: %d\n le denominateur est %d",p.num ,p.dem);
}



NombreRationnel addition(NombreRationnel nbr1, NombreRationnel nbr2){
    NombreRationnel p;
    nbr1=saisir();
    nbr2=saisir();
    p.num=nbr1.num*nbr2.dem + nbr2.num*nbr1.dem ;
    p.dem=nbr1.dem * nbr2.dem;
    return p;
}

NombreRationnel multiplication(NombreRationnel nbr1, NombreRationnel nbr2) {
    NombreRationnel p;
    p.num = nbr1.num * nbr2.num;
    p.dem = nbr1.dem * nbr2.dem;
    return p;
}
