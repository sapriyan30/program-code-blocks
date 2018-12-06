#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

using namespace std;
int main ()
{
  int acak, angka, counter;
  srand(time(NULL));
  acak = 1 + rand() % 10;
  counter=0;
  do {
      cout << "\nGame Tebak Angka";
      cout << "\nMasukkan Angka antara 0 - 10\t= ";
      cin >> angka;
      if (angka!=acak) {
          cout << "\nAngka yang anda masukkan bukan angka yang dikehendaki komputer\n";
      }
      counter++;
  } while (angka!=acak);
  cout << "\nAngka yang anda masukkan sesuai yang dipikirkan komputer yaitu \'" << acak << "\'";
  cout << "\njumlah percobaan sebanyak " << counter << " 3 kali";
  getch();
}

