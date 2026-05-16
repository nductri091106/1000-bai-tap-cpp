#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Dinh nghia cau truc SinhVien
struct SinhVien
{
    string mssv;
    string hoTen;
    float diemTB;
};

// Ham nhap thong tin 1 sinh vien
void nhapSinhVien(SinhVien &sv)
{
    cout << "Nhap MSSV: ";
    cin >> sv.mssv;
    cin.ignore(); // Xoa bo nho dem truoc khi nhap chuoi co khoang trang

    cout << "Nhap Ho ten: ";
    getline(cin, sv.hoTen);

    cout << "Nhap Diem TB: ";
    cin >> sv.diemTB;
}

// Ham xuat thong tin 1 sinh vien
void xuatSinhVien(SinhVien sv)
{
    cout << "MSSV: " << sv.mssv
         << " | Ho ten: " << sv.hoTen
         << " | Diem TB: " << sv.diemTB << endl;
}

int main()
{
    int n;
    cout << "============= QUAN LY SINH VIEN =============" << endl;
    cout << "Nhap so luong sinh vien can quan ly: ";
    cin >> n;

    // Su dung vector de tao mang dong chua danh sach sinh vien
    vector<SinhVien> danhSach(n);

    // Nhap du lieu
    for (int i = 0; i < n; i++)
    {
        cout << "\n--- Nhap thong tin sinh vien thu " << i + 1 << " ---" << endl;
        nhapSinhVien(danhSach[i]);
    }

    // Xu ly xuat danh sach dat hoc bong
    cout << "\n============= DANH SACH DAT HOC BONG (DTB >= 8.0) =============" << endl;
    bool coHocBong = false;
    for (int i = 0; i < n; i++)
    {
        if (danhSach[i].diemTB >= 8.0)
        {
            xuatSinhVien(danhSach[i]);
            coHocBong = true;
        }
    }

    if (!coHocBong)
    {
        cout << "-> Khong co sinh vien nao du dieu kien nhan hoc bong ky nay." << endl;
    }

    return 0;
}