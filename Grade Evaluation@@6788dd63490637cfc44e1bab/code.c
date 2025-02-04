#include <stdio.h>
int main() {
    char a;
    scanf("%c",a);
    if(ch==A){
        printf("Excellent");
    }
    else if(ch==B){
        printf("Good");
    }
    else if(ch==C){
        printf("Average");
    }
    else if(ch==D){
        printf("Below Average");
    }
    else if(ch==E){
        printf("Fail");
    }
    else{
        printf("Invalid grade");
    }
    return 0;
}