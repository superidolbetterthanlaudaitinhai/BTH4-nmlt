#include<stdio.h>
#include<math.h>
using namespace std;
int tong_uoc(int n, int i)
{
	if (i == n)
	{
		return n;
	}
	if (n % i == 0)
	{
		return i + tong_uoc(n, i + 1);
	}
	else
	{
		return tong_uoc(n, i + 1);
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
			printf("n phai la so nguyen duong!! VUI LONG NHAP LAI \n");
		}
	} while (n<0);
	printf("tong uoc so cua n: %d", tong_uoc(n, 1));
	return 0;
}