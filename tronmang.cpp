#include <iostream>
using namespace std;

void NhapMang(int *a,int nA, char ch){
    if(ch == 'a' || ch == 'A'){
        cout << "\n\t====Nhap Mang A ====\n";
        for(int i = 0; i < nA; i++){
            cout << "Nhap "<< ch <<"[" << i << "] = ";
            cin >> a[i];
        }
    }else if(ch == 'b' || ch == 'B'){
        cout << "\n\t==== NHAP MANG B ====\n";
        for(int i = 0; i < nA; i++){
            cout << "Nhap "<< ch <<"[" << i << "] = ";
            cin >> a[i];
        }
    }else
        cout << "\nKhong Dung Ten Mang \n";
}
void XuatMang(int *a , int n,char ch){
    cout << "\t=== XUAT MANG "<< ch << " ===\t\n\t";
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << "\n\t===================\n";
}
void TronMang(int *a, int *b, int n){
    int *c = NULL;
    c = new int[2*n];
    int k = 0;
    for(int i = 0; i < n; i++){
        c[k] = a[i];
        k++;
    }
    for(int i = 0; i < n; i++){
        c[k] = b[i];
        k++;
    }
    cout << "\t== XUAT MANG TRON ==\t\n\t";
    for(int i = 0; i < 2 *n; i++){
        
        cout << c[i] <<" ";
    }
    cout << "\n\t====================\n";
}
int main(){
    int n;
    char choose;
    cout << "Nhap So Luong Phan Tu Cua Mang : ";cin >> n;
    int *a = new int[n];
    int *b = new int[n];
    int *c = new int[2*n];
    do{
        cout << "Ban Muon Nhap Mang A hay B (Nhap e de thoat) : ";cin >> choose;
        if(choose == 'a' || choose == 'A')
            NhapMang(a,n,'A');
        else if(choose == 'b' || choose == 'B')
            NhapMang(b,n,'B');   
    }while(choose != 'e');
    XuatMang(a,n,'A');
    XuatMang(b,n,'B');
    cout << "Tron Mang :\n";
    TronMang(a,b,n);
    cout << endl;
    return 0;
}