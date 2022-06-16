#include "../base.h"
using namespace std;

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

int main()
{
  DAFTAR z;
  z.output();
}