#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
using namespace std;
struct SinhVien
{
    char mssv[20];
    char hoten[30];
    float diemtoan, diemly, diemhoa, diemtb;
};

void nhap(){
	 int n;
    cout<<"nhap so sinh vien: ";
    cin>>n;
    SinhVien sinhVien[n];
//nhap du lieu sv_______________________________________
    for(int i=0;i<n;i++){
         cout<<"nhap du lieu cho sinh vien thu "<<i+1<<":"<<endl;
         cout<<"MSSV: ";
         cin>>sinhVien[i].mssv;
         cout<<"ho va ten: "; fflush(stdin);
         gets(sinhVien[i].hoten);
                cout<<"Diem chuyen can: ";
                cin>>sinhVien[i].diemtoan;
                cout<<"Diem bai tap: ";
                cin>>sinhVien[i].diemly;
                cout<<"Diem thuc hanh: ";
                cin>>sinhVien[i].hoa;
                cout<<"Diem kiem tra so 1: ";
                sinhVien[i].diemtb = (sinhVien[i].toan + sinhVien[i].diemly + sinhVien[i].diemhoa)/3;
                cout<<"Diem trung binh la: "<<sinhVien[i].diemtb;
}
int main(){
	return 0;
}
