#include <iostream>
#include <cstdlib>

int hailstone(int n)	// ��������Hailstone��n���ĳ���
{
	int length = 1;		// ��1��ʼ�����°������𲽵��ƣ����ۼƲ�����ֱ��n = 1
	while ( 1 < n )
	{
		(n % 2) ? n =3 * n + 1: n /= 2;
		length++;
		std::cout << "length = "  << length  << std::endl;
		//����|Hailstone��n��|
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
