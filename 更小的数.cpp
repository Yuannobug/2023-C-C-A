#include<iostream>
using namespace std;
#include<string>

/*
小蓝有一个长度均为 n 且仅由数字字符 0 ∼ 9 组成的字符串，
下标从 0 到 n − 1，你可以将其视作是一个具有 n 位的十进制数字 num，
小蓝可以从 num 中选出一段连续的子串并将子串进行反转，最多反转一次。
小蓝想要将选出的子串进行反转后再放入原位置处得到的新的数字 numnew 满足
条件 numnew < num，请你帮他计算下一共有多少种不同的子串选择方案，
只要两个子串在 num 中的位置不完全相同我们就视作是不同的方案。
注意，我们允许前导零的存在，即数字的最高位可以是 0 ，这是合法的。

*/

int main()
{
	int i = 0; int j = 0; int tmp = 0; int tmp2 = 0;
	int len = 0;
	int num = 0;
	string str;
	cin >> str;//使用string 获取字符串时无需考虑字符串长度且比vector运行更快
	len = str.size();
	for (i = 0; i < len; i++)
	{
		for (j = i + 1; j < len; j++)
		{
			tmp = j;
			if (str[i] > str[j])//首字符比尾字符大即可交换，小则不能交换
			{
				num++;
			}
			else if (str[i] == str[j])//相等时进行递归运算
			{
				tmp2 = i;
				while (i < tmp)
				{
					tmp2++;
					tmp--;
					if (str[tmp2] < str[tmp])//首字符比尾字符大即可交换，小则不能交换
					{
						break;
					}
					else if (str[tmp2] > str[tmp])//首字符比尾字符大即可交换，小则不能交换
					{
						num++;
						break;
					}
				}
			}
		}
	}
	cout << num;
	return 0;
}