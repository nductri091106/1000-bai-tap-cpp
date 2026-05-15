#include <iostream>
using namespace std;

int main()
{
    int n, reversedNumber = 0, remainder;
    cout << "Hay nhap vao mot so nguyen n = ";
    cin >> n;

    while (n != 0)
    {
        remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        n /= 10;
    }

    cout << "So dao nguoc la: " << reversedNumber << endl;
    return 0;
}