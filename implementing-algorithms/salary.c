/*prints employers ID and salary depending on his working hours*/

#include <stdio.h>
int main()
{
    //declaring the variables//
    float hours,hrmth,salaryhr,salmth;
    int days;
    char ID[10];

    //taking input from thhe user//
    printf("enter your Employee ID: ");
    scanf("%s",ID);
    printf("enter your working hours of a day; ");
    scanf("%f",&hours);
    printf("enter your working days of a month; ");
    scanf("%d",&days);
    printf("enter your salary per hour in USD:");
    scanf("%f",&salaryhr);

    //perfoming the calculations//
    hrmth = hours*days; 
    salmth = salaryhr*hrmth;

    //printing the required values//
    printf("The Id of th employer is %s.\n",ID);
    printf("The salary of the employee in a month is $%.2f\n",salmth);


}