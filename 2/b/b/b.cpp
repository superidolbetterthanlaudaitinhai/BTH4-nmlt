#include<iostream>
#include<math.h>
using namespace std;
int tong(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return ((n *n) + tong(n - 1));
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
			cout << "n phai la so nguyen duong!! VUI LONG NHAP LAI "<< endl;
		}
	} while (n < 0);
	cout << "tong cac so chinh phuong: " << tong(n);
	return 0;
}