#include<iostream>
using namespace std;
int main()
{
	int n, n1, n2, n3, n4;
	cout << " nhap N: " << " ";
	cin >> n;
	n4 = n % 10, n = n / 10;
	n3 = n % 10, n = n / 10;
	n2 = n % 10, n = n / 10;
	n1 = n;
	cout << " gia tri S = " << (n1 + n2 + n3 + n4) << " ";
	return 0;
}