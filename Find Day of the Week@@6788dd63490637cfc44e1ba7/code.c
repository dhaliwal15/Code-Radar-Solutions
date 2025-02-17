#include<stdio.h>
int main() {
    int a,b,c,d,e,f,g;
    scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g);
    if(a){
        printf("Monday");
    }
    else if(b){
        printf("Tuesday");
    }
    else if(c){
        printf("Wednesday");
    }
    else if(d){
        printf("Thursday");
    }
    else if(e){
        printf("Friday");
    }
    else if(f){
        printf("Saturday");
    }
    else if(g){
        printf("Sunday");
    }
    else{
        printf("Invalid");
    }
    return 0;
}