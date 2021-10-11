//
// Created by nathm on 06/10/2021.
//

#ifndef TD5_MESSTRUCTURES_H
#define TD5_MESSTRUCTURES_H

typedef struct{
    int dem,num;
}NombreRationnel;
NombreRationnel saisir();
void affichage(NombreRationnel p);
NombreRationnel addition(NombreRationnel nbr1, NombreRationnel nbr2);
NombreRationnel multiplication(NombreRationnel nbr1, NombreRationnel nbr2);
#endif //TD5_MESSTRUCTURES_H
