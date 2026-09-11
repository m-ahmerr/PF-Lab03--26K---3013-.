#include <stdio.h>
int main(){
    int totalnum;
    int totalweight;
    printf("enter total number of people in elevator and total weight in kgs \n");
    scanf("%d %d", &totalnum, &totalweight);
    if (totalweight>1000 || totalnum>10){
        if(totalweight>1000){
            printf("weight is exceeding");}
        else{
            printf("number of people is exceeding");}
    }
    else{
        printf("elevator can operate");
    }

}
