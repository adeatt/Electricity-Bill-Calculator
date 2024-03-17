#include<stdio.h>
#include<stdlib.h>

int main(){
    int unit = 0;
    int ID = 0;
    float charge = 0;
    char Name[30];
    double BILL= 0;
    float extra_charge = 0;
    float ENDBILL = 0;
    
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
    
    BILL = unit * charge;

    if(BILL > 400)
        extra_charge = BILL * 0.11;


    ENDBILL = BILL + extra_charge;
    printf("\n Stromrechnung\n");
    printf("ID:               %d\n", ID);
    printf("Name:             %s\n", Name);
    printf("Unit:             %d\n", unit);
    printf("Charge:           %f\n", charge);
    printf("Bill:             %f\n", BILL);
    printf("add. charge:      %f\n", extra_charge);
    printf("Net Bill:         %f\n", ENDBILL);
    
    
    return 0;
}

