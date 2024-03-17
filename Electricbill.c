#include<stdio.h>
#include<stdlib.h>





int main(){
    int unit = 0;
    int ID = 0;
    float charge = 0;
    char Name[30];
    double allgverbrauch = 0;
    float zusatz = 0;
    float Endbetrag = 0;
    
    printf("Enter your ID: \n");
    scanf("%d", &ID);
    
    printf("Enter your Name: \n");
    scanf("%s", &Name);

    printf("Enter your current consumed energy unit: \n");
    scanf("%d", &unit);


    if(unit <= 199){
        charge = 1.20;
    }else if(unit >= 200 && unit < 400){
        charge = 1.50;
    }else if(unit >= 400 && unit <600){
        charge = 1.80;
    }else
        charge = 2.00;
    
    allgverbrauch = unit * charge;

    if(allgverbrauch > 400)
        zusatz = allgverbrauch * 0.15;


    Endbetrag = allgverbrauch + zusatz;
    printf("\n Stromrechnung\n");
    printf("ID:               %d\n", ID);
    printf("Name:             %s\n", Name);
    printf("Unit:             %d\n", unit);
    printf("Charge:           %f\n", charge);
    printf("allg. Verbrauch:  %f\n", allgverbrauch);
    printf("zusatz:           %f\n", zusatz);
    printf("Endbetrag:        %f\n", Endbetrag);
    
    
    return 0;
}

