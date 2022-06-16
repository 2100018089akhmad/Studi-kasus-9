#include "../base.h"
using namespace std;

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

int main()
{
  DAFTAR z;
  z.proses();
}