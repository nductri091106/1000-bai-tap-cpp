// Cap nhat duoi Local

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Hay nhap vao mot so nguyen duong n = ";
    cin >> n;

    if (n < 2)
    {
        cout << n << " khong phai la so nguyen to." << endl;
        return 0;
    }

    bool isPrime = true;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
    {
        cout << n << " la so nguyen to." << endl;
    }
    else
    {
        cout << n << " khong phai la so nguyen to." << endl;
    }

    return 0;
}
