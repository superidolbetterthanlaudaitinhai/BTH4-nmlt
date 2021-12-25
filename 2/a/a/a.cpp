#include<stdio.h>
#include<math.h>
using namespace std;
int tong_n_so_nguyen(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else
	{
		return n + tong_n_so_nguyen(n - 1);
	}
}
int main()
{
	int n;
	do
	{
		printf("nhap so nguyen duong n: "); scanf_s("%d", &n);
		if (n < 0)
		{
			printf("n la so nguyen duong!! VUI LONG NHAP LAI");
		}
	} while (n<0);
	printf("tong n so nguyen: %d", tong_n_so_nguyen(n));
	return 0;
}