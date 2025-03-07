#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2==0 || j%2==0){
            for(int j=1;j<=i;j++){
                printf("*");
            }
        }
        else{
            printf(" ");
        }
    printf("\n");
    }
return 0;
}