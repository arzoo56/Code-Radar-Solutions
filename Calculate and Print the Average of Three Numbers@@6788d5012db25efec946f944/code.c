#include <stdio.h>
int main() {
    int a,b,c;
    float average;
    scanf("%d %d %d", &a,&b,&c );
    average= (float(a+b+c)/3);
    pritnf("Average: %.2f",average);
    return 0;
}