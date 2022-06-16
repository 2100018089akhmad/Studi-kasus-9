#include "../base.h"
using namespace std;

void DAFTAR::input(){
for (i=0; i<15; i++){
  cout<<endl;
  cout<<"Masukkan Kelas : ";
  cin>>b[i];
	cout<<"Masukkan NIM : ";
	cin>>c[i];
  cout<<"Masukkan Nama : ";
  cin>>d[i];
	}
	cout<<endl;
}

int main(){
  DAFTAR z;
  z.input();
}