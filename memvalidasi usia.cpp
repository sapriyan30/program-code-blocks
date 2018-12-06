#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
   int usia;
   cout<<"masukan usia="<<endl;
   cin>>usia;

   if (usia<15)
    cout<<"anak-anak"<<endl;
   else
    cout<<"dewasa"<<endl;

   getch();
}
