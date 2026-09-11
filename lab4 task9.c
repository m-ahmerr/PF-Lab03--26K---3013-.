#include <stdio.h>
int main(){
    int hour,membership,amount,bill;
    printf("Enter 1 if you are a member,else enter 0\n");
    scanf("%d",&membership);
    printf("Enter what hour is it in 24 hour format\n");
    scanf("%d",&hour);
    printf("Enter your bill amount\n");
    scanf("%d",&amount);
    if (membership == 1){
        if (hour >= 15 && hour <= 17) {
            bill = amount - (0.25 * amount);
        }
        else{
            bill = amount - (0.1 * amount);
        }
    }
    else if(membership == 0){
        if (hour >= 15 && hour <= 17){
            bill = amount - (0.2 * amount);
        }
        else{
            bill = amount;
        }
    }
    else{
        printf("invalid membership input");
    }
    printf("your bill after discount(if any) is : %d",bill);






}