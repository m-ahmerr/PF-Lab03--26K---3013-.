#include <stdio.h>
int main(){
    int income, age, ER;
    printf("Enter your income, age , existing repayment");
    scanf("%d %d %d",&income,&age,&ER);
    if (income > 30000){
        if ( age > 21 && age < 60){
            if (ER<(0.4 *income)){
                printf("approved");                }
            else
                printf("Rejected due to High Debt Ratio.");}
        else
            printf("Rejected due to Age");}
    else {
      printf("Rejected due to Income");}
}