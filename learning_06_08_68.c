#include<stdio.h>
int main()
{   //โปรแกรมคำนวนหาระยะทางที่ทหารถูกลงโทษ
    int soldier;
    float run,kilo;

    scanf("%d",&soldier);
    if(soldier<10)
    {
        run = ((100*3/5)+100)*2;
    }
    else if(soldier<=20)
    {
        run = ((300*3/5)+300)*2*2;
    }
    else if(soldier<=50)
    {
        run = ((500*3/5)+500)*2*3;
    }
    else
    {
        run = ((600*3/5)+600)*2*4;
    }
    kilo = run / 1000 * soldier;
    printf("%.2f",kilo);
    printf("\n%.2f",run);




/*  //โปรแกรมคำนวนเงินเดือน
    char name[30];
    float salary,increase,newsalary;


    scanf("%s",&name);
    scanf("%f",&salary);

    if(salary<10000)
    {
        increase= (float)salary*10/100;
        newsalary= salary+increase;
    }
    else if(salary <= 19999)
    {
        increase= (float)salary*7/100;
        newsalary= salary+increase;
    }
    else if(salary <= 39999)
    {
        increase= (float)salary*5/100;
        newsalary= salary+increase;
    }
    else if(salary <= 70000)
    {
        increase= (float)salary*3/100;
        newsalary= salary+increase;
    }
    else
    {
        increase= (float)salary*1/100;
        newsalary= salary+increase;
    }
    printf("\nName : %s",name);
    printf("\nSalary : %f",salary);
    printf("\nIncrease Salary : %f",increase);
    printf("\nNew Salary : %f",newsalary);*/

/*    float num1,num2,num3;

    printf("Input Num1 :");
    scanf("%f",&num1);
    printf("Input Num2 :");
    scanf("%f",&num2);
    printf("Input Num3 :");
    scanf("%f",&num3);

    if(num1>=num2)
    {
        printf("\nMax Is :%f",num1);
    }
    else if(num2>=num3)
    {
        printf("\nMax Is :%f",num2);
    }
    else
    {
        printf("\nMax Is :%f",num3);
    }*/

/*    float grade;

    printf("Input Grade :");
    scanf("%f",&grade);

    if(grade<1.75)
    {
        printf("Low");
    }
    else if(grade>=1.75 && grade<= 2.5)
    {
        printf("Middle");
    }
    else
    {
        printf("Good!!");
    }*
/*    int x;

    printf("Input X :");
    scanf("%d",&x);

    if(x==0)
    {
        printf("Zero");
    }
    else if(x<0)
    {
        printf("Negative");
    }
    else
    {
        printf("Positive");
    }*/

    return 0;
}
