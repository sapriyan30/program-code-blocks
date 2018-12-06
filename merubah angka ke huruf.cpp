#include <iostream>
#include <conio.h>
using namespace std;
 int main()
{
int nilai;

cout<<"Masukkan Nilai yang akan di rubah ke huruf = "<<endl;
cin>>nilai;
if((100>=nilai)&&(nilai>80))
{
cout<<"Nilai `A` ";
}
else if((79>=nilai)&&(nilai>65))
{
cout<<"Nilai `B` ";
}
else if((64>=nilai)&&(nilai>55))
{
cout<<"Nilai `C` ";
}
else if((54>=nilai)&&(nilai>40))
{
cout<<"Nilai `D` ";
}
else if((39>=nilai)&&(nilai>0))
{
cout<<"Nilai `E` ";
}
getch();
}
