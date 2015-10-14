#include <iostream>
#include <cstdlib>

int hailstone(int n)	// 计算序列Hailstone（n）的长度
{
	int length = 1;		// 从1开始，以下按定义逐步递推，并累计步数，直至n = 1
	while ( 1 < n )
	{
		(n % 2) ? n =3 * n + 1: n /= 2;
		length++;
		std::cout << "length = "  << length  << std::endl;
		//返回|Hailstone（n）|
	}
	return length; 
}

int main()
{
	int num;
	int steps;
	std::cout << "please input n" << std::endl;
	if (std::cin >> num)
	{
		steps = hailstone(num);
	}
	std::cout << "the n is: " << num  << std::endl << "the length is: "<< steps << std::endl;

	system("PAUSE");
	return 0;
}
