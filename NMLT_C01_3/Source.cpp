#include<iostream>
using namespace std;
int main()
{
	int ten, soluong, dongia;
	cout << " nhap ten san pham: " << " ";
	cin >> ten;
	cout << " nhap so luong sp: " << " ";
	cin >> soluong;
	cout << " nhap don gia: " << " ";
	cin >> dongia;
	cout << " tien = " << soluong*dongia<<" ";
	cout << "\n VAT = " << (soluong*dongia) * 0.1 << " ";
	return 0;
}