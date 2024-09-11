#include<stdio.h>
#define N 10

//common
void fun_1(int n)
{
    int num=n;
    int t=0;
    int arr[N];
    while (num>0)
    {
        arr[t]=num%10;
        t++;
        num/=10;
        /* code */
    }
    for(size_t i=0;i<t;i++)
    {   
        printf("%d",arr[i]);
    }
    
}

//
void fun_2(int n)
{
    int s,t;
    int arr[N];
    for(size_t i=N;s>9;){
        
        t=s%10;
    }


}

int main()
{
    int a=678;
    fun_1(a);
    putchar("\n");
    fun_2(a);
    return 0;
}