#include<iostream>
using namespace std;
int so_dao_nguoc(int n)
{
	cout << n % 10;
	if ((n/10) == 0)
		return 0;
	return (so_dao_nguoc(n / 10));
}
int main()
{
	int n;
	do
	{
		cout << "nhap so nguyen duong n: "; cin >> n;
		if (n < 0)
		{
			cout << "n phai la so nguyen duonng!! vui long nhap lai" << endl;
		}
	} while (n < 0);
	so_dao_nguoc(n);
	return 0;
}