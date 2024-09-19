#include<stdio.h>
int main(){
    float num_1;
    printf("Enter your first number: ");
    scanf("%f",&num_1);
    float num_2;
    printf("Enter your second number: ");
    scanf("%f",&num_2);

    char ops = '+' && '/' &&  '*' &&  '-' ;
    printf("Enter operator: ");
    scanf("%c" ,&ops);

        if(ops == '+' ){
            printf("Your sum is\n: %f",num_1+num_2);
        }   
        else if(ops == '-'){
            printf("Your substraction is\n: %f",num_1-num_2);
        }   
        else if(ops == '*'){
            printf("Your multiplication is\n: %f",num_1*num_2);
        }   
        else if(ops == '/'){
            printf("Your division is\n: %f",num_1/num_2);
        }   


    return 0;
}