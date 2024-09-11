#include <iostream>
#include <cmath>  // 用于四舍五入函数round()

using namespace std;

int main() {
    int cm;
    cin >> cm;

    double meters = cm / 100.0;

    double total_feet = meters / 0.3048;


    int feet = static_cast<int>(total_feet);
    //static_cast<int>(total_feet) 是一个类型转换表达式，
    //static_cast 用于将 total_feet 这个浮点数（double）强制转换为整数类型（int）。
    //通过这种转换，小数部分会被舍去，只保留整数部分。
    
    int inches = (total_feet - feet) * 12;



    cout << feet << " " << inches << endl;

    return 0;
}