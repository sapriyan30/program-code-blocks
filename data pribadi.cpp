#include<iostream>
using namespace std;
int main ()
{
 char nama[25], lahir[25], alamat[25], umur[25], sekolah[25], kelas[25];
       cout<<" Siapa nama anda :";
       cin>>nama;
       cout<<" Dimana anda lahir :";
       cin>>lahir;
       cout<<" Di mana anda tinggal :";
       cin>>alamat;
       cout<<" Umur berapa anda sekarang :";
       cin>>umur;
       cout<<" Di mana anda sekolah :";
       cin>>sekolah;
       cout<<" Kelas berapa anda sekarang :";
       cin>>kelas;
       cout<<" Hello "<< nama <<endl;
       cout<<" Kamu lahir di "<< lahir <<endl;
       cout<<" Kamu tinggal di "<< alamat <<endl;
       cout<<" Umur kamu "<< umur <<endl;
       cout<<" Anda bersekolah di "<< sekolah <<endl;
       cout<<" Anda sekarang kelas "<< kelas <<endl;

       return 0;
}
