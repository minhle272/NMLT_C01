#include<iostream>
using namespace std;
int main()
{
	int T, L, H, hsT, hsL, hsH;
	cout << " nhap diem thi Toan: " << " ";
	cin >> T;
	cout << " nhap diem thi Ly: " << " ";
	cin >> L;
	cout << " nhap diem thi Hoa: " << " ";
	cin >> H;
	cout << " nhap he so Toan: " << " ";
	cin >> hsT;
	cout << " nhap he so Ly: " << " ";
	cin >> hsL;
	cout << " nhap he so Hoa: " << " ";
	cin >> hsH;
	cout << " diem trung binh = " << (T * hsT + L * hsL + H * hsH) / (hsT + hsL + hsH) << " ";
	return 0;
}