#include <stdio.h>
#include <math.h>

int IsTheNumber ( const int N );

int main()
{
    int n1, n2, i, cnt;
    
    scanf("%d %d", &n1, &n2);
    cnt = 0;
    for ( i=n1; i<=n2; i++ ) {
        if ( IsTheNumber(i) )
            cnt++;
    }
    printf("cnt = %d\n", cnt);

    return 0;
}

/* 你的代码将被嵌在这里 */
int IsTheNumber ( const int N ){
    int con=0,num1;
    //TODO:创建数组对应0～9
    int number[10]={0};
    
    num1=N;
    while (num1>0)
    {
        int num2=num1%10;
        number[num2]++;
        if(number[num2]>=2){
            con=1;
            break;
        }
        num1/=10;
    }
    if (N==((int)sqrt(N)*(int)sqrt(N)))   con++;
    
    return (con>=2)?1:0;
}