#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter 2 no.s"<<endl;
    cin>>x>>y;
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<endl<<"x = "<<x<<" y = "<<y;
    return 0;
}

