#include<stdio.h>
int main()
{
    float total,basic,hra, da, allow, pf;
    char grade;
    printf("Enter your Grade:");
    scanf("%c", &grade);
    printf("Enter your Basic Salary:");
    scanf("%f",&basic); 
    hra = (0.2)*(basic);
    da = (0.5)*(basic);
    pf = (0.11)*(basic);
    if (grade == 'A')
    {
        allow = 1700;
    }
    else if (grade == 'B')
    {
        allow = 1500;
    }
    else if (grade == 'C')
    {
        allow = 1300;
    }
    else{
        printf("Incorrect entry.");
    }
    total= basic + hra + da + allow - pf;
    printf("Your total salary is: %f",total);
    return 0;
}