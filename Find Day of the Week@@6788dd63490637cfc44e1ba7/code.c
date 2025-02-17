#include<stdio.h>
int main() {
    int a,b,c,d,e,f,g;
    scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g);
    if(1){
        printf("Monday");
    }
    else if(2){
        printf("Tuesday");
    }
    else if(3){
        printf("Wednesday");
    }
    else if(4){
        printf("Thursday");
    }
    else if(5){
        printf("Friday");
    }
    else if(6){
        printf("Saturday");
    }
    else if(7){
        printf("Sunday");
    }
    else{
        printf("Invalid");
    }
    return 0;
}