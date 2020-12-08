#include<iostream>
using namespace std;

int main()
{
	int n;
	do {
		cout << "Nhap nam: ";
		cin >> n;
	} while (n <= 0);
	// Neu nam <= 0 thi chuong trinh se yeu cau nhap lai
	if (n % 100 == 0)
		if (n % 400 == 0)
			cout << n << " la nam nhuan\n";
		else
			cout << n << " khong phai nam nhuan\n";
	else
		if (n % 4 == 0)
			cout << n << " la nam nhuan\n";
		else
			cout << n << " khong phai nam nhuan\n";
	return 0;
}
