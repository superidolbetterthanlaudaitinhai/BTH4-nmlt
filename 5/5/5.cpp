#include<iostream>
#include<math.h>
using namespace std;
int exchange_decimal(int n, int i)
{
	if (n == 0)
	{
		return 0;
	}
	else
	{
		return (n % 10) * pow(2, i) + exchange_decimal(n / 10, i+1);
	}
}
bool check_nhi_phan(int n)
{
	bool check = true;
	if (n < 0)
	{
		check = false;
	}
	while (n > 0)
	{
		int i;
		i = n % 10;
		if (i != 0 && i != 1)
		{
			check = false;
		}
		n = n / 10;
	}
	return check;
}
int main()
{
	int n;
	do
	{
		cout << "nhap so nhi phan: "; cin >> n;
		if (check_nhi_phan(n)!=true)
		{
			cout << "n phai la so nhi nhap !! VUI LONG NHAP LAI" << endl;
		}
	} while (check_nhi_phan(n)!=true);
	if (check_nhi_phan(n))
	{
		cout << "chuyen sang dang thap phan: " << exchange_decimal(n, 0);
	}
	return 0;
}