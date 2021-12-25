#include<iostream>
#include<cmath>
using namespace std;
double tong(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return (1.0 / n) + tong(n - 1);
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
			cout << "n phai la so nguyen duong!! VUI LONG NHAP LAI" << endl;
		}
	} while (n < 0);
	cout << "ket qua: " << tong(n);
	return 0;
}