#include <iostream>
using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;
	cout << "Chon phep toan (+,-,tich) ";
	cin >> phepToan;
        if(phepToan =='+')
            cout<<"Tong="<<tong(a,b);<<endl;
        if(phepToan =='-')
            cout<<"Hieu="<<hieu(a,b);<<endl;
        if(phepToan =='tich')
            cout<<"Tich="<<tich(a,b);
        cout<<endl;
	system("pause");
          
	return 0;
}
 int tich(int a, int b){
  retun tich = a*b;
}