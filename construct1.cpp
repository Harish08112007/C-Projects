// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
//destructors
class box
{ 
    int length, width;
public:
box(int x, int y)
{
    length=x;
    width=y;
}
int print()
{
    cout<<"length:"<<length<<endl;
    cout<<"width:"<<width<<endl;
    return 0;
}
~box()
{cout<<"hello"<<endl;}
};
    

int main() {
 box box1(10,20);
 cout<<"box1 details:"<<endl;
 box1,print();
}
cout<<"out of scope"<<endl;

    return 0;
}