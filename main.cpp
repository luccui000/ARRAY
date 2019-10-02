#include <iostream>
using namespace std;

void NhapMang(int *a, int n){
    for(int i = 0;i < n; i++){
        cout << "Nhap a[" << i << "] = ";
        cin >> a[i];
    }
}

void XuatMang(int *&a, int n){
    cout << "\t==== Xuat Mang ====\t\n";
    cout << "\t  ";
    for(int i = 0;i < n; i++){
        cout << a[i] << " ";
    }
    cout << "\n\t===================\t\n";
}
void Them(int *&a, int &n){
    int val, vitri;
    cout << "\nNhap Vi Tri Can Chen : "; cin >> vitri;
    cout << "\nNhap Gia Tri Can Chen : "; cin >> val;
    for(int i = n; i > vitri; i--){
        a[i] = a[i-1];
    }  
    a[vitri] = val;
    n++;
}
int TimPhanTu(int *a, int n, int val){
    for(int i = 0; i < n; i++){
        if(a[i] == val)
            return i;
    }
    return 0;
}
void Xoa(int *a, int &n){
    int val;
    cout << "\nNhap Gia Tri Can Xoa : "; cin >> val;
    if(TimPhanTu(a,n,val) != 0){
        for(int i = TimPhanTu(a,n,val); i < n; i++){
            a[i] = a[i+1];
        }
        n--;
    }else
        cout << "\nKhong Co Phan Tu Nao Nhu Vay \n";
}

int main(){
    int n;
    cout << "Nhap So Luong Phan Tu : ";
    cin >> n;
    int *a;
    a = new int[n];
    NhapMang(a,n);
    XuatMang(a,n);
    Them(a,n);
    XuatMang(a,n);
    Xoa(a,n);
    XuatMang(a,n);
    cout << endl;
    return 0;
}