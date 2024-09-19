#include<stdio.h>
int main()
{int number;
printf("Enter your number: ");
scanf("%d",&number);
if (number==2)
{
    printf("The given number is prime");
}
else{
    if(number%2 != 0){
        printf("The given number is a prime number");
    }
    else{
        printf("The given number is a not prime");
    }
}

    return 0;
}