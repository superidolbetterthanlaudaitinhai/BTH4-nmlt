#include<stdio.h>
#include<math.h>
using namespace std;
int tong_giai_thua(int n)
{
	if (n == 1)
	{
		return 1;
	}
	int sum = 1;
	for (int i = 1; i <= n; i++)
	{
		sum *= i;
	}
	return sum + tong_giai_thua(n - 1);
}
int main()
{
	int n;
	do
	{
		printf("nhap so nguyen duong n: "); scanf_s("%d", &n);
		if (n < 0)
		{
			printf("n phai la so nguyen duong!! VUI LONG NHAP LAI \n");
		}
	} while (n < 0);
	printf("ket qua: %d", tong_giai_thua(n));
	return 0;
}