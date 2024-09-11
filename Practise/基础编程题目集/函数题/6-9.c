#include <stdio.h>

int Count_Digit ( const int N, const int D );

int main()
{
    int N, D;
    
    scanf("%d %d", &N, &D);
    printf("%d\n", Count_Digit(N, D));
    return 0;
}

/* 你的代码将被嵌在这里 */
int Count_Digit ( const int N, const int D ){
    //FIXME:N==0;
    if (N==0&&N==D)   return 1;

    int num=(N<0)?(N*(-1)):N;
    int time=0;
    while (num>0)
    {
        if(num%10==D) time++;
        num/=10;
    }
    return time;
}