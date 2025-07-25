#include <stdio.h>
int main()
{
    int money,CustomerMoney,Cupon,Cupon10,Cupon100,Cupon100left,Cupon10left;

    printf("Input CustomerMoney :");
    scanf("%d",&CustomerMoney);
    money = CustomerMoney*13/100;
    if(money>=5000)
    {
        Cupon = CustomerMoney*2.5/100;
        Cupon100left =Cupon%100;
        Cupon100=(Cupon-Cupon100left)/100;
        Cupon10left=Cupon%10;
        Cupon10=(Cupon100left-Cupon10left)/10;
        printf("Cupon %d\n",Cupon);
        printf("Cupon100 :%d\n",Cupon100);
        printf("Cupon10 %d\n",Cupon10);


    }



   /* float money,result,sale;
    printf("Input Money :");//Input Money
    scanf("%f",&money);

    if(money>=2500)
    {
        sale= money*3/100;
        result= money-sale;
        printf("\nSale :%.2f\n",sale);
        printf("\nResult :%.2f\n",result);
    }*/

   /* float Unit,result;
    printf("Input Unit Bill :");
    scanf("%f",&Unit);

    if(Unit>=25);
    {
        result = Unit*17.5;
        printf("\nBill : %.3f",result);
    }*/

    /*   int a,b,result;

    printf("Input a:");
    scanf("%d",&a);
    printf("Input b:");
    scanf("%d",&b);

    if(a>b)
    {
        result = a-b;
        printf("\nA :%d\nB:%d\nResult : %d\n",a,b,result);
    }*/

    /*  float a,b,result;
    printf("Input a :");
    scanf("%f",&a);
    printf("Input b :");
    scanf("%f",&b);

    if(b!=0) //เงื่อนไข
        {
            result=a/b;
            printf("\n Result : %.2f ",result); //Print Result
        }*/

    /*
    int num,rem;

    scanf("%d",&num);
    rem=num%2;

    if(rem==0) //in "if" Not Use ';'
    {
        printf("\n%d Even\n",num);

    }

    */

    return 0;
}
