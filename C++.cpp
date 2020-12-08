#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap nam can kiem tra: ";
	cin >> n;
	
	if (n % 100 == 0)
		if (n % 400 == 0)
			cout << n << " la nam nhuan\n";
		else
			cout << n << " khong phai la nam nhuan\n";
	else
		if (n % 4 == 0)
			cout << n << " la nam nhuan\n";
		else
			cout << n << " khong phai la nam nhuan\n";
	return 0;
}
