#include <stdio.h>
int main()
{
    float i=1, weight, n_egg, price_S, price_M, price_L, total, size_S, size_M, size_L;
    printf("Input N of Egg :");
    scanf("%f",&n_egg);

    while(i<=n_egg)
    {
        printf("Input Egg %.0f Weight :",i);
        scanf("%f",&weight);
        if(weight>0 && weight<30)
        {
            printf("Size S\n");
            size_S++;
            total = total + 3.25;
        }
        else if(weight>=30 && weight<45)
        {
            printf("Size M\n");
            size_M++;
            total = total + 4;
        }
        else if(weight>=45 && weight<=100)
        {
            printf("Size L\n");
            size_L++;
            total = total + 4.5;
        }
        else
        {
            printf("There's no fucking egg have weight more than 100g, you bitch!\n");
        }
        i++;
    }
    printf("S = %.0f\n",size_S);
    printf("M = %.0f\n",size_M);
    printf("L = %.0f\n",size_L);
    printf("Money = %.2f\n",total);

    return 0;
}
