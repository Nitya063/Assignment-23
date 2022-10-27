#include<iostream>
using namespace std;
int main()
{
    int a[10],i,sum=0;
    cout<<"Enter 10 no.s"<<endl;
    for(i=0;i<10;i++)
    {
      cin>>a[i];
    }
    for(i=0;i<10;i++)
    {
      sum=sum+a[i];
    }

    cout<<endl<<"Sum = "<<sum;
    return 0;
}


