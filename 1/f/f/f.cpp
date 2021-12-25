#include<stdio.h>
#include<math.h>
bool check_so_chinh_phuong(int n)
{
	if (sqrt(n) == (int)(sqrt(n)))
	{
		return true;
	}
	else
	{
		return false;
	}
}
int tong_chinh_phuong(int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (check_so_chinh_phuong(i))
		{
			sum += i;
		}
	}
	return sum;
}
int main()
{
	int n;
	do
	{
		printf("nhap so nguyen duong n : "); scanf_s("%d", &n);
		if (n < 0)
		{
			printf("n phai la so nguyen duong!!VUI LONG NHAP LAI \n");

		}
	} while (n < 0);
	printf("tong so chinh phuong be hon n : %d\n ", tong_chinh_phuong(n)) ;
	return 0;
}