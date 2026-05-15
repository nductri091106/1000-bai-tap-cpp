#include <iostream>
using namespace std;

// Ham de quy tim Uoc Chung Lon Nhat (UCLN)
int findGCD(int a, int b)
{
    // Dieu kien dung: Neu b = 0 thi UCLN la a
    if (b == 0)
        return a;

    // De quy: UCLN(a, b) cung la UCLN(b, a % b)
    return findGCD(b, a % b);
}

int main()
{
    int a, b;
    cout << "--- TIM UOC CHUNG LON NHAT (DE QUY) ---\n";
    cout << "Nhap vao so nguyen a va b: ";
    cin >> a >> b;

    // Chuyen ve so duong de tim UCLN chinh xac
    if (a < 0)
        a = -a;
    if (b < 0)
        b = -b;

    cout << "Uoc chung lon nhat cua " << a << " va " << b << " la: " << findGCD(a, b) << endl;

    return 0;
}