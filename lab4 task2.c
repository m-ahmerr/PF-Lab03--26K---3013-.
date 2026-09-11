#include <stdio.h>
int main(){
    float entryscore;
    float fscpercent;
    float finalscore;
   
    printf("enter your entry test score and fsc percentage: \n");
    scanf("%f %f",&entryscore,&fscpercent);
    finalscore = (0.5*entryscore) +(0.5 * fscpercent);
    if (finalscore >= 80){
        printf("you have secured an admission in computer science");
    }
    else if (finalscore>=65 && finalscore <= 79){
        printf("you have secured an admission in software engineering");
        
    }
    else if (finalscore>=50 && finalscore<=64){
        printf("you have secured an admission in information technology");
    }
    else{
        printf("you are rejected");
    }
        
}
