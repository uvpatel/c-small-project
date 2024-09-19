#include<stdio.h>
int main()
{
    float phyMarks;
    printf("Enter physics marks of ");
    scanf("%f",&phyMarks);
    float chemMarks;
    printf("Enter marks of ");
    scanf("%f",&chemMarks);
    float mathMarks;
    printf("Enter maths marks of ");
    scanf("%f",&mathMarks);

    float per = (phyMarks+chemMarks+mathMarks)/3;
    if (per<33)
    {
        printf("you are fail");
    }
    else if (80<per && per<=90)
    {
        printf("Your grade is A");
    }
    else if (90<per && per<=100)
    {
        printf("Your grade is Excellent\n");
    }
    else if (70<per && per<=80)
    {
        printf("Your grade is B\n");
    }
    else if (60<per && per<=70)
    {
        printf("Your grade is C\n");}

    else if (50<per && per<=60)
    {
        printf("Your grade is D\n");

    }
     printf("you are pass");
    
    }
    else{
        if (mathMarks <33 && phyMarks <33 && chemMarks<33
        )
        {
            /* code */
        }
        
    } 
    



    return 0;
}