#include<iostream>
#include<math.h>
using namespace std;
bool check_so_nguyen_to(int n) // kiểm tra xem 1 số có phải số nguyên tố hay không
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
int main()
{
	int n;
	do
	{
		cout << "nhap so nguyen duong n: "; cin >> n;
		if (n < 0)
		{
			cout << "n phai la so nguyen duong, vui long nhap lai" << endl;
		}
	} while (n < 0);
	if (check_so_nguyen_to(n))
	{
		cout << "n la so nguyen to" << endl;
	}
	else
	{
		cout << "n khong phai la so nguyen to" << endl;
	}
	return 0;
}
