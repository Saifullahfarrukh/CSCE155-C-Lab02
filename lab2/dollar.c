#include <stdio.h>
int main()
{
    float Japaneseyen,Usdollar,gbpound,exchange_fee;
    printf("Enter the value of USdollar");
    scanf("%f", &Usdollar);

    exchange_fee = 0.1*Usdollar;
    Usdollar -= exchange_fee;

    gbpound = (Usdollar/2)*0.79;
    Japaneseyen = (Usdollar/2)*127.65;

    printf("Exchange tax = %.2f\n",exchange_fee);
    printf("In british pound = %.2f\n",gbpound);
    printf("In Japanese yen = %.0f\n",Japaneseyen);
}