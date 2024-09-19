#include<stdio.h>
int main()
{
    char ch;
    printf("Enter your character: ");
    scanf("%c", &ch);
    if(97<=ch && ch<=122){
        printf("Lowercase");
    }
    else{
        printf("uppercase");
    }
    return 0;
}