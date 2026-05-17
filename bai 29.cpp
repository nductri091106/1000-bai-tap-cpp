#include <iostream>

using namespace std;

// Hàm kiểm tra số Fibonacci
bool isFibonacci(int n)
{
    // Dãy Fibonacci thường bắt đầu từ các số không âm
    if (n < 0)
        return false;

    // 0 và 1 hiển nhiên là số Fibonacci
    if (n == 0 || n == 1)
        return true;

    // Khởi tạo 2 số Fibonacci đầu tiên
    int a = 0;
    int b = 1;
    int c = 1; // Số Fibonacci tiếp theo

    // Vòng lặp tính các số Fibonacci tiếp theo cho đến khi lớn hơn hoặc bằng n
    while (c < n)
    {
        a = b;
        b = c;
        c = a + b;
    }

    // Nếu số Fibonacci tính được đúng bằng n, thì n là số Fibonacci
    return c == n;
}

int main()
{
    int n;

    cout << "Nhap mot so nguyen de kiem tra: ";
    cin >> n;

    if (isFibonacci(n))
    {
        cout << n << " la so Fibonacci." << endl;
    }
    else
    {
        cout << n << " khong phai la so Fibonacci." << endl;
    }

    return 0;
}