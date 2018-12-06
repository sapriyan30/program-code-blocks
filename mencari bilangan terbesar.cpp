#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    cout<<"Program Mencari Bilangan Terbesar"<<endl;
    int bil1, bil2, bil3, terbesar;
    cout<<"Masukan Bilangan 1 = ";
    cin>>bil1;
    cout<<"Masukan Bilangan 2 =";
    cin>>bil2;
    cout<<"Masukan Bilangan 3 =";
    cin>>bil3;

    if (bil1>bil2)
        terbesar = bil1;
    else
        terbesar = bil2;
    if  (bil3>terbesar)
        terbesar = bil3;
        cout<<"Bilangan Terbesar = "<<terbesar;
    getch();
}
