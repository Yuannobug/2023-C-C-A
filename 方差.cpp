#include<iostream>
using namespace std;

/*
给定 L, R，问 L ≤ x ≤ R 中有多少个数 x 满足存在整数 y,z 使得 x = y2 − z2。
*/

int main()
{
    long L = 0; long R = 0; long num1 = 0; long num2 = 0; long i = 0;
    cin >> L;
    cin >> R;
    if (L % 2 == 0 && R % 2 == 0)//奇数一定满足平方差
    {
        num1 = (R - L) / 2;
    }
    else
    {
        num1 = (R - L) / 2 + 1;
    }
    if (L % 4 == 0 || R % 4 == 0)//当首或者尾为4的倍数
    {
        num2 = (R - L) / 4 + 1;
    }
    else//当首尾都不为4的倍数
    {
        if (L % 4 == 1)L = L - 1;
        if (L % 4 == 2)L = L - 2;
        if (L % 4 == 3)L = L - 3;
        if (R % 4 == 1)R = R - 1;
        if (R % 4 == 2)R = R - 2;
        if (R % 4 == 3)R = R - 3;
        num2 = (R - L) / 4;
    }
    cout << num1 + num2;
    return 0;
}