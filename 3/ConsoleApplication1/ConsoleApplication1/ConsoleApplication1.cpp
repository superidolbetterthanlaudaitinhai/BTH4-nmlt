#include<stdio.h>
#include<math.h>
using namespace std;
int tinh_mu(int x, int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return x * tinh_mu(x, n - 1);
	}
}
int main()
{
	int n, x;
	do
	{
		printf("nhap so nguyen duong x: "); scanf_s("%d", &x); printf("\n");
		printf("nhap so nguyen duong n: "); scanf_s("%d", &n); printf("\n");
		if (n < 0 || x < 0)
		{
			printf("n phai la so nguyen duong !! VUI LONG NHAP LAI \n");
		}
	} while (n<0||x<0);
	printf("ket qua: %d", tinh_mu(x, n));
	return 0;
}