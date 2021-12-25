#include<iostream>
#include<math.h>
using namespace std;
int tong_le(int n)
{
	if (n == 0)
	{
		return 0;
	}
	if ((n % 10) % 2!=0)
	{
		return ((n % 10) + tong_le(n /10));
	}
	else
	{
		return (tong_le(n / 10));
	}
}
void main()
{
	int n;
	do
	{
		cout << "nhap so nguyen duong n: "; cin >> n;
		if (n < 0)
		{
			cout << "n phai la so nguyen duong" << endl;
		}
	} while (n < 0);
	cout << "tong cac chu so le trong n: " << tong_le(n);
}