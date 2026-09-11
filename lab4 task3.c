#include <stdio.h>
int main()
{
    int acctype;
    int balance;
    int interest = 0;
    printf("Enter account type (for savings enter 1,for current enter 2,for fixed deposit enter 3) ");
    scanf("%d", &acctype);
    printf("Enter account balance");
    scanf("%d", &balance);
    switch (acctype)
    {
    case 1:
        if  (balance>100000){
            interest = (12*0.04*balance);}
        else{
            interest = (12*0.02*balance);        }
            printf("annual interest: %d",interest);
        break;
    case 2:
        printf("no interest earned");
        break;
    case 3:
        interest= (12*0.08*balance);
        printf("annual interest: %d",interest);
        break;    
    }
}