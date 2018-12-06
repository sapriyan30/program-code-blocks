#include <iostream>
using namespace std;
class kuadran
{
   public:
   int x;
   int y;

   void input()
   {
       cout<<"X="; cin>>x;
       cout<<"Y="; cin>>y;
       cout<<"koordinat titik(x,y)="<<x<<" "<<y<<endl;
   }
   void output()
   {
       if(x>0 && y>0)
    {
        cout<<"kuadran 1"<<endl;
    }
    else if (x<0 && y>0)
   {
       cout<<"kuadran 2"<<endl;
   }
   else if (x<0 && y<0)
   {
       cout<<"kuadran 3"<<endl;
   }
   else
   {
       cout<<"kuadran 4"<<endl;
   }
   }
void main()
{
    kuadran a;
    a. input();
    b. output();
}
