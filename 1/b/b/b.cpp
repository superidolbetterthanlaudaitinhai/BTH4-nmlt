#include<iostream>
#include<math.h>
using namespace std;
bool check_so_chinh_phuong(int& n)
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
int main()
{
	int n;
	do
	{
		cout << "moi nhap so nguyen duong n: "; cin >> n;
		if (n < 0)
		{
			cout << "n phai la so nguyen duong!! moi nhap lai" << endl;
		}
	} while (n < 0);
	if (check_so_chinh_phuong(n))
	{
		cout << "n la so chinh phuong";
	}
	else
	{
		cout << "n khong phai la so chinh phuong";
	}
	return 0;
}