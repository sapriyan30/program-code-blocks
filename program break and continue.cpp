#include <iostream>
using namespace std;

int main()
{
    for (int a=0; a<=15; a++){
        if (a==7){
     continue;} // break
       cout<<a<<endl;
    }
    cout<<"finish!"<<endl;
    cin.get();
    return 0;
}
