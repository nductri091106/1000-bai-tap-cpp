#include <iostream>
using namespace std;

// Ham de quy tinh tong cac chu so
int tinhTongChuSo(int n)
{
    // Dieu kien dung
    if (n == 0)
        return 0;

    // Lay chu so cuoi cung cong voi tong cua cac chu so con lai
    return (n % 10) + tinhTongChuSo(n / 10);
}

int main()
{
    int n;
    cout << "--- TINH TONG CAC CHU SO (DE QUY) ---\n";
    cout << "Nhap vao so nguyen duong n: ";
    cin >> n;

    // Xu ly truong hop nguoi dung nhap so am
    if (n < 0)
        n = -n;

    cout << "Tong cac chu so cua " << n << " la: " << tinhTongChuSo(n) << endl;

    return 0;
}