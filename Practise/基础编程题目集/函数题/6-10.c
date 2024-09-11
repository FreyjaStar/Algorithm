#include <stdio.h>

void Print_Factorial ( const int N );

int main()
{
    int N;
    
    scanf("%d", &N);
    Print_Factorial(N);
    return 0;
}

/* 你的代码将被嵌在这里 */
#include<stdlib.h>
#define MAX 10000  // 用来存储大数的位数上限

void Print_Factorial(const int N) {
    //TODO: 如果输入无效
    if (N < 0) {
        printf("Invalid input\n");
        return;
    }

    // 用数组存储结果
    int result[MAX];
    result[0] = 1;  // 初始化为 1
    int result_size = 1;  // 当前结果的有效位数为 1

    // 计算 N!
    for (int i = 2; i <= N; i++) {
        int carry = 0;  // 用来处理进位
        for (int j = 0; j < result_size; j++) {
            int product = result[j] * i + carry;
            result[j] = product % 10;  // 保留个位
            carry = product / 10;  // 进位
        }

        // 处理剩余的进位
        while (carry) {
            result[result_size] = carry % 10;
            carry /= 10;
            result_size++;
        }
    }

    // 打印结果，从高位到低位输出
    for (int i = result_size - 1; i >= 0; i--) {
        printf("%d", result[i]);
    }
    printf("\n");
}
