#include<stdio.h>
int main(){
    char r='r',y='y',g='g',colour;
    printf("enter the colour(r/y/g)\n");
    scanf(" %c",&colour);
    printf("You entered: %c\n", colour);

    if(colour==r){
        printf("stop");
    }
    else if (colour==y){
        printf("slow down");
    }
    else if(colour==g){
        printf("go");
    }
    else
    {
        printf("invalid colour");
    }
    return 0;
}
