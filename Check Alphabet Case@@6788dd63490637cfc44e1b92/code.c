#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if (ch>=97 && ch<=122){
        printf("Lowercase");
    }
    else if (ch>=65 && ch<=90){
        printf("Uppercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}