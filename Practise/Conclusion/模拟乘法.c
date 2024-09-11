/*
在C语言中，具有最大表示范围的整形变量类型是 unsigned long long。
这是一个至少 64 位的无符号整形类型，通常可以表示从 0 到 2^64 - 1
（即 18446744073709551615）     1.8*10^19
之间的整数。

int：通常为 32 位，最大值是 2147483647（2^31 - 1）。  2*10^9
*/

#include<stdio.h>
#include<stdlib.h>
#define N 1000
#define MAX (N*N)

void mult(int a,int b){
    //TODO:记录两数的符号
    int ope1=a>0?1:(-1);
    int ope2=b>0?1:(-1);
    a=abs(a);
    b=abs(b);
    
    //TODO:用数组记录数字的每一位
    int num_1[N]={0},num1=0;
    int num_2[N]={0},num2=0;
    while (abs(a)>=1)
    {
        num_1[num1]=a%10;
        a/=10;
        num1++;
    }
    while (abs(b)>=1)
    {
        num_2[num2]=b%10;
        num2++;
        b/=10;
    }

    /*
    //test
    for(int i=0;i<num1;i++){
        printf("%d",num_1[i]);
    }
    printf("\n");
    for(int i=0;i<num2;i++){
        printf("%d",num_2[i]);
    }
    */ 

    //TODO:模拟乘法
    int res[MAX]={0};
    for (int i = 0; i < num1; i++) {
        for (int j = 0; j < num2; j++) {
            res[i + j] += num_1[i] * num_2[j];
            //TODO: 处理进位
            if (res[i + j] >= 10) {
                res[i + j + 1] += res[i + j] / 10;
                res[i + j] %= 10;
            }
        }
    }

    //TODO:去掉前导0
    int len = num1 + num2;
    while (len > 0 && res[len] == 0) {
        len--;  // 去掉前导0
    }

    //TODO: 如果结果为0
    if (len == 0 && res[0] == 0) {
        printf("0\n");
        return;
    }

    //TODO: 打印符号
    if (ope1 * ope2 < 0) {
        printf("-");
    }

    //TODO: 打印结果数组
    for (int i = len; i >= 0; i--) {
        printf("%d", res[i]);
    }
    printf("\n");
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    mult(a,b);
    return 0;
}