#include<iostream>
#include<math.h>
using namespace std;
bool check_so_nguyen_to(int n)
{
	if (n < 2)
	{
		return false;
	}
	else
	{
		for (int i = 2; i < n; i++)
		{
			if (n % i == 0)
			{
				return false;
			}
		}
		return true;
	}
}
int tong_nguyen_to(int n)
{
	int sum_le = 0;
	for (int i = 2; i < n; i++)
	{
		if (check_so_nguyen_to(i))
		{
			sum_le += i;
		}
	}
	return sum_le;
}
int main()
{
	int n;
	do
	{
		cout << "nhap so nguyen duong n: "; cin >> n;
		if (n < 0)
		{
			cout << "n phai la so nguyen duong!! vui long nhap lai" << endl;
		}
	} while (n < 0);
	cout << "tong so nguyen to be hon n: " << tong_nguyen_to(n);
	return 0;
}