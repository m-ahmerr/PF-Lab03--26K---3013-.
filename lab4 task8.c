#include <stdio.h>
int main(){
    int zonetype,speed,difference;
    int fine = 1000;
    printf("Enter your zone \nfor school enter 1, for highway enter 2, for residential enter 3\n");
    scanf("%d",&zonetype);
    printf("Enter your speed\n");
    scanf("%d",&speed);
    switch(zonetype){
        case 1:
          if (speed>30 && speed <=50){
            printf("fine:%d",fine);
          }
          else{
            printf("fine:%d",2*fine);
          }
          break;
        case 2:
          if (speed>100 && speed <=120){
            printf("fine:%d",fine);
          }
          else{
            printf("fine:%d",2*fine);
          }
          break;
        case 3:
          if (speed>50 && speed <=70){
            printf("fine:%d",fine);
          }
          else{
            printf("fine:%d",2*fine);
          } 
          break;
    }
}