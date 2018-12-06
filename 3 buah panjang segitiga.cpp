#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{
    int a,b,c;

    cout <<"Berikan sisi A : ";
    cin >> a;

    cout <<"Berikan sisi B : ";
    cin >> b;

    cout <<"Berikan sisi C : ";
    cin >> c;

    if(a==b && a==c)
        //jika nilai a,b,c sama itu segitiga sama sisi
    {
        cout<<"Segitiga sama sisi"<<endl;
    }
    else if(a==b || a==c)
    {
        if(a!=b || a!=c)
        {
            // jika nilai a,b,c keduanya sama dan salah satu beda termasuk segitiga sama kaki
            cout<<"Segitiga sama kaki"<<endl;
        }
    }
    else
    // jika nilai a,b,c tidak sama termasuk segitiga sembarang
    cout<<"Segitiga sembarang"<<endl;


    system("pause");
    return 0;

}
