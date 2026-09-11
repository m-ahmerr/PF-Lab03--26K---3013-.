#include <stdio.h>
int main(){
    int membership;
    int timeslot;
    int fees;
    printf("Enter membership type (for student enter 1,for regular enter 2,for senior citizen enter 3) ");
    scanf("%d", &membership);
    printf("Enter time slot (for morning enter 1,for evening enter 2)");
    scanf("%d", &timeslot);
    switch (membership){
    case 1:
        if  (timeslot == 1){
            fees = 2000- (0.15*2000);}
        else{
            fees = 2000;}
            printf("Monthly fee: %d",fees);
        break;
    case 2:
        if  (timeslot == 1){
            fees = 3500 - (0.15*3500);}
        else{
            fees = 3500;}
            printf("Monthly fee: %d",fees);
        break;
    case 3:
        if  (timeslot == 1){
            fees = 2500 - (0.15*2500);}
        else{
            fees = 2500;}
            printf("Monthly fee: %d",fees);
        break;
    }
}