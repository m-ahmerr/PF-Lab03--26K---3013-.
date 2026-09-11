#include <stdio.h>
int main(){
    int policystat, vehicleage,claim ;
    printf("Enter your vehicle's policy status \n(if it is active enter 1)\n(otherwise enter 0)\n");
    scanf("%d", &policystat);
    printf("Enter age of your vehicle \n");
    scanf("%d",&vehicleage);
    printf("Enter claim amount \n");
    scanf("%d",&claim);
    if (policystat == 1){
        if (vehicleage< 10 && claim <=500000){
            printf("claim of %d approved",claim);}
        else if (vehicleage >=10 && vehicleage <= 15){
            claim = 0.5 * claim;
            printf("claim of %d approved",claim);}}
    else if (policystat ==0){
        printf("insurance rejected due to inactive policy status"); }
    else{
        printf("invalid input");}
     
}