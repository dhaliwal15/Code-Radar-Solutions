#include<stdio.h>
int main() {
    int a,b,c,d,e,f,g;
    scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g);
    if(a==1){
        printf("Monday");
    }
    else if(b==2){
        printf("Tuesday");
    }
    else if(c==3){
        printf("Wednesday");
    }
    else if(d==4){
        printf("Thursday");
    }
    else if(e==5){
        printf("Friday");
    }
    else if(f==6){
        printf("Saturday");
    }
    else if(g==7){
        printf("Sunday");
    }
    else{
        printf("Invalid");
    }
    return 0;
}