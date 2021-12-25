#include<stdio.h>
#include<math.h>
using namespace std;
int giai_thua_x2(int x)
{
	if (x == 0)
	{
		return 1;
	}
	else
	{
		return x * giai_thua_x2(x - 1);
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
			printf("n phai la so nguyen duong !! VUI LONG NHAP LAI \n");
		}
	} while (n <0);
	int fact = 1;
	for (int i = 1; i <= n; i++)
	{
		fact *= i;
	}
	printf("ket qua: %d", giai_thua_x2(fact));
}