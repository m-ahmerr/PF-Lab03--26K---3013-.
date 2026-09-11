#include <stdio.h>
int main(){
    int plan;
    int minsused;
    int totalbill;
    printf("enter your plan \n");
    printf("1 for Plan1(500 for 1000 minutes) , 2 for Plan2(800 for 2000 minutes), 3 for Plan3(Rs. 1200 for unlimited minutes),4 for Plan4(custom plan billed at Rs.1/minute) \n"); 
    scanf("%d", &plan);
    printf("enter minutes used : \n");
    scanf("%d", &minsused);    
    switch(plan){
        case 1:
            printf("Plan A - 500rs for 1000 minutes \n");
            if (minsused > 1000){
                totalbill = 500 + (2*(minsused - 1000));}
            else{
                totalbill = 500;}   
            break;
        case 2:  
            printf("Plan B - 800rs for 2000 minutes \n");
            if (minsused > 2000){
                totalbill = 800 + (2*(minsused - 2000));}
            else{
                totalbill = 800;}   
            break;  
        case 3:
            printf("Plan C - 1200rs for unlimited minutes \n");
            totalbill = 1200;
            break;     
        case 4:
            printf("Plan D - Rs.1/minute \n");
            totalbill = minsused;
            break;
        default:
            printf("invalid plan input \n");    
    
    }
    printf("your total bill is: %d rupees", totalbill); 
    
}