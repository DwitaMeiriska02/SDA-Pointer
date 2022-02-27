/* Program Pointer
  Nama File : Lat_III_01 */
  
#include<iostream.h>
#include<conio.h>
void main()
{
  int x=8;
  int *xPtr;
  xPtr = &x;
  cout<<"Nilai x = "<<x<<endl;
  cout<<"Alamat x = "<<&x<<endl;
  cout<<"Alamat x = "<<xPtr<<endl;
  cout<<"Nilai yang disimpan pada alamat ";
  cout<<xPtr<<" adalah "<<*xPtr;
  getch();
}