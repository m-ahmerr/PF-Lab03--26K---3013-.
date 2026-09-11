#include <stdio.h>
int main(){
    int temp,hrate;
    printf("Enter body temperature and heart rate");
    scanf("%d %d",&temp,&hrate);
    if (hrate>120 || temp>39){
        printf("Critical - Immediate Attention.");

    }
    else if ((hrate>=110 && hrate<=120)&&(temp>=37.5 && temp<=39)){
        printf("Urgent.");
    
    }
    else{
        printf("Normal - Wait in Queue.");

    }






}