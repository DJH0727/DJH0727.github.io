#include<iostream>
const int N = 1010;
int line_1 = 0, row_1 = 0, line_2 = 0, row_2 = 0;
int a[N][N], b[N][N];
void matrix_multiplier()
{
	int i = 0, j = 0, l = 0, sum = 0;
	std::cout << "result:" << std::endl;
	for (i = 0; i < line_1; i++)
	{
		for (j = 0; j < row_2; j++)
		{
			for (l = 0; l < line_2; l++)sum += a[i][l] * b[l][j];//计算result[i][j]
			printf(" %3d", sum);
			sum = 0;
		}
		std::cout << std::endl;
	}
}

int main()
{
	std::cin >> line_1 >> row_1 >> line_2 >> row_2;//两个矩阵的行数和列数
	int i = 0, j = 0;
	for (i = 0; i < line_1; i++)
		for (j = 0; j < row_1; j++)
			std::cin >> a[i][j];//输入第一个矩阵
	for (i = 0; i < line_2; i++)
		for (j = 0; j < row_2; j++)
			std::cin >> b[i][j];//第二个
	matrix_multiplier();
}
