#include <iostream>
using namespace std;

class DAFTAR
{
  friend istream operator>>(istream &, DAFTAR &);
  friend ostream operator<<(ostream &, DAFTAR &);

  public :
  void input();
  void proses();
  void output();

  private:
  string a[3][5];
	string c[15];
  string b[15];
  string d[15];
	int i,j,k;
  int brs,klm;
};

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

void DAFTAR::proses()
{
  cout<<"Masukkan Banyak Baris: ";
  cin>>brs;
  cout<<"Masukkan Banyak Kolom: ";
  cin>>klm;
	while (i<15)
    { 
		 for (j=0; j<brs; j++)
      {
        for (k=0; k<klm; k++)
          {
            a[j][k]=b[i];
            i=i+1;
          }
      }
     }	
}

void DAFTAR::output(){
  cout<<"=========================="<<endl;
  cout<<"|| Kelas || NIM || Nama ||"<<endl;
  cout<<"=========================="<<endl;
  cout<<"--------------------------"<<endl;
    for (int i=0; i<15; i++)
    {
      cout<<"|   "<<b[i]<<"   |   "<<c[i]<<"   |   "<<d[i]<<"   |"<<endl;
    }
			cout<<"--------------------------"<<endl;
		  cout<<"=========================="<<endl;
}